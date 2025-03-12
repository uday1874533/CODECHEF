#pragma GCC optimize("-Ofast","-funroll-all-loops","-ffast-math")

#pragma GCC optimize("inline","fast-math","unroll-loops","no-stack-protector")

.#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define pb emplace_back
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());

int rnd(int a, int b) {
	return rng() % (b - a + 1) + a;
}

string to_string(string s) {
	return s;
}
template <typename T> string to_string(T v) {
	bool first = true;
	string res = "[";
	for (const auto &x : v) {
		if (!first)
			res += ", ";
		first = false;
		res += to_string(x);
	}
	res += "]";
	return res;
}

void dbg_out() {
	cerr << endl;
}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
	cerr << ' ' << to_string(H);
	dbg_out(T...);
}

#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

template<class T> inline void chkmin(T& x, T y) {
	if (y < x) x = y;
}
template<class T> inline void chkmax(T& x, T y) {
	if (y > x) x = y;
}

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
typedef long long ll;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;
using i128 = __int128;
const i64 INF = 1e18;
const int oo = 1e9 + 7;
const int mod = 1e9 + 7;
const int MX = 200005;

struct HLD {
    int n;
    std::vector<int> siz, top, dep, parent, in, out, ord;
    std::vector<std::vector<int>> adj;
    int cur;
    
    HLD() {}
    HLD(int n) {
        init(n);
    }
    void init(int n) {
        this->n = n;
        siz.resize(n);
        top.resize(n);
        dep.resize(n);
        parent.resize(n);
        in.resize(n);
        out.resize(n);
        ord.resize(n);
        cur = 0;
        adj.assign(n, {});
    }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void work(int root = 0) {
        top[root] = root;
        dep[root] = 0;
        parent[root] = -1;
        dfs1(root);
        dfs2(root);
    }
    void dfs1(int u) { 
        if (parent[u] != -1) {
            adj[u].erase(std::find(adj[u].begin(), adj[u].end(), parent[u]));
        }
        
        siz[u] = 1;
        for (auto &v : adj[u]) {
            parent[v] = u;
            dep[v] = dep[u] + 1;
            dfs1(v);
            siz[u] += siz[v];
            if (siz[v] > siz[adj[u][0]]) {
                std::swap(v, adj[u][0]);
            }
        }
    }
    void dfs2(int u) {
        in[u] = cur++;
        ord[in[u]] = u;
        for (auto v : adj[u]) {
            top[v] = v == adj[u][0] ? top[u] : v;
            dfs2(v);
        }
        out[u] = cur;
    }
    int lca(int u, int v) {
        while (top[u] != top[v]) {
            if (dep[top[u]] > dep[top[v]]) {
                u = parent[top[u]];
            } else {
                v = parent[top[v]];
            }
        }
        return dep[u] < dep[v] ? u : v;
    }
    int dist(int u, int v) {
        return dep[u] + dep[v] - 2 * dep[lca(u, v)];
    }
    int jump(int u, int k) {
        if (dep[u] < k) {
            return -1;
        }
        
        int d = dep[u] - k;
        
        while (dep[top[u]] > d) {
            u = parent[top[u]];
        }
        
        return ord[in[u] - dep[u] + d];
    }
    bool isAncester(int u, int v) {
        return in[u] <= in[v] && in[v] < out[u];
    }
    int rootedParent(int u, int v) {
        std::swap(u, v);
        if (u == v) {
            return u;
        }
        if (!isAncester(u, v)) {
            return parent[u];
        }
        auto it = std::upper_bound(adj[u].begin(), adj[u].end(), v, [&](int x, int y) {
            return in[x] < in[y];
        }) - 1;
        return *it;
    }
    int rootedSize(int u, int v) {
        if (u == v) {
            return n;
        }
        if (!isAncester(v, u)) {
            return siz[v];
        }
        return n - siz[rootedParent(u, v)];
    }
    int rootedLca(int a, int b, int c) {
        return lca(a, b) ^ lca(b, c) ^ lca(c, a);
    }
};

i64 xp[MX], kp[MX];

void solve() {
	int n, q; cin >> n >> q;
	vector<vector<int>> g(n);
	HLD hld(n);
	for (int i = 0; i < n - 1; i++) {
		int u, v; cin >> u >> v;
		u --, v --;
		g[u].push_back(v);
		g[v].push_back(u);
		hld.addEdge(u, v);
	}
	hld.work();
	vector<int> sum(n), siz(n);
	function<void(int, int)> dfs = [&] (int u, int p) -> void {
		if (g[u].size() > 2) sum[u] ++;
		siz[u] = 1;
		for (auto v : g[u]) {
			if (v != p) {
				sum[v] = sum[u];
				dfs(v, u);
				siz[u] += siz[v];
			}
		}
	};
	dfs(0, -1);
	while (q --) {
		int a, b; cin >> a >> b;
		a --, b --;
		i64 ans = 1ll * (n - 1) * (n - 1);
		int fa = hld.lca(a, b);
		int dis = hld.dist(a, b);
		int num = sum[a] + sum[b] - sum[fa] - (fa ? sum[hld.parent[fa]] : 0);
		num -= (g[a].size() > 2) + (g[b].size() > 2);
		int na, nb;
		if (fa == a) {
			int sfa = hld.jump(b, hld.dep[b] - hld.dep[fa] - 1);
			nb = siz[sfa];
			na = n - nb;
		} else {
			na = siz[a];
			nb = n - na;
		}
		if (!num) {
			ans -= 1ll * (na - 1) * nb + 1ll * nb * na;
			ans += 1ll * (dis - 1) * (na - 1);
			if (g[b].size() == 1) ans -= xp[dis];
		} else {
			if (g[b].size() == 1) {
				int st = 0, en = dis;
				auto can = [&] (int md) {
					int ff;
					if (hld.dep[a] - hld.dep[fa] >= md) ff = hld.jump(a, md);
					else ff = hld.jump(b, dis - md);
					int pp = hld.lca(ff, b);
					int num = sum[ff] + sum[b] - sum[pp] - (pp ? sum[hld.parent[pp]] : 0);
					return num;
				};
				while (en - st > 1) {
					int md = st + en >> 1;
					if (can(md)) st = md;
					else en = md - 1;
				}
				if (can(en)) st = en;
				if (st <= dis - st) {
					int xx = dis - 2 * st + 1;
					ans -= 1ll * xx * (n - 1);
					ans += kp[dis] - kp[dis - xx] + 1ll * xx * (xx - 1) / 2;	
				}
			}
		}
		cout << ans << endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
#endif

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 1; i < MX; i++) xp[i] = xp[i - 1] + i / 2;
	for (int i = 1; i < MX; i++) kp[i] = kp[i - 1] + (i - 1) / 2;

	int Tc = 1;
	cin >> Tc;
	while (Tc --) {
		solve();
	}
	return 0;
}