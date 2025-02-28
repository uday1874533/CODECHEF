#include <bits/stdc++.h>

using namespace std;

using ll=long long;
using ld=long double;
const ll ILL=2167167167167167167;
const int INF=2100000000;
#define rep(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define all(p) p.begin(),p.end()
template<class T> using _pq = priority_queue<T, vector<T>, greater<T>>;
template<class T> int LB(vector<T> &v,T a){return lower_bound(v.begin(),v.end(),a)-v.begin();}
template<class T> int UB(vector<T> &v,T a){return upper_bound(v.begin(),v.end(),a)-v.begin();}
template<class T> bool chmin(T &a,T b){if(b<a){a=b;return 1;}else return 0;}
template<class T> bool chmax(T &a,T b){if(a<b){a=b;return 1;}else return 0;}
template<class T> void So(vector<T> &v) {sort(v.begin(),v.end());}
template<class T> void Sore(vector<T> &v) {sort(v.begin(),v.end(),[](T x,T y){return x>y;});}
bool yneos(bool a,bool upp=false){if(a){cout<<(upp?"YES\n":"Yes\n");}else{cout<<(upp?"NO\n":"No\n");}return a;}
template<class T> void vec_out(vector<T> &p,int ty=0){
    if(ty==2){cout<<'{';for(int i=0;i<(int)p.size();i++){if(i){cout<<",";}cout<<'"'<<p[i]<<'"';}cout<<"}\n";}
    else{if(ty==1){cout<<p.size()<<"\n";}for(int i=0;i<(int)(p.size());i++){if(i) cout<<" ";cout<<p[i];}cout<<"\n";}}
template<class T> T vec_min(vector<T> &a){assert(!a.empty());T ans=a[0];for(auto &x:a) chmin(ans,x);return ans;}
template<class T> T vec_max(vector<T> &a){assert(!a.empty());T ans=a[0];for(auto &x:a) chmax(ans,x);return ans;}
template<class T> T vec_sum(vector<T> &a){T ans=T(0);for(auto &x:a) ans+=x;return ans;}
int pop_count(long long a){int res=0;while(a){res+=(a&1),a>>=1;}return res;}
template<class T> T square(T a){return a * a;}



void solve();

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    rep(i, 0, t) solve();
}

void solve()
{
    int N;
    cin >> N;
    vector S(N, vector<string>(N));
    rep(i, 0, N) rep(j, 0, N) cin >> S[i][j];
    vector B(N, vector<int>(N));
    rep(i, 0, N) rep(j, 0, N) cin >> B[i][j];
    vector ans(N, vector<char>(N, '?'));
    vector dec(N, vector<int>(N));
    vector<pair<int ,int>> order;
    auto upd = [&](int x, int y, int c) -> void 
    {
        if (ans[x][y] != '?') return;
        ans[x][y] = c;
        rep(i, 0, N){
            if (dec[i][y] == 0 && S[i][y][x] != c)
            {
                dec[i][y] = 1;
                order.push_back({i, y});
            }
        }
        rep(j, 0, N){
            if (dec[x][j] == 0 && S[x][j][y] != c)
            {
                dec[x][j] = -1;
                order.push_back({x, j});
            }
        }
    };
    rep(i, 0, N) rep(j, 0, N)
    {
        if (S[i][j][i] == S[i][j][j]){
            upd(i, j, S[i][j][i]);
        }
    }
    rep(rp, 0, order.size())
    {
        auto [x, y] = order[rp];
        if (dec[x][y] == 1)
        {
            rep(j, 0, N) upd(x, j, S[x][y][j]);
        }
        else
        {
            rep(i, 0, N) upd(i, y, S[x][y][i]);
        }
    }
    rep(a, 0, N) rep(b, 0, N)
    {
        if (ans[a][b] == '?')
        {
            order.clear();
            if (B[a][b] == 0) upd(a, b, max(ans[a][a], ans[b][b]));
            else upd(a, b, min(ans[a][a], ans[b][b]));
            rep(rp, 0, order.size())
            {
                auto [x, y] = order[rp];
                if (dec[x][y] == 1){
                    rep(j, 0, N) upd(x, j, S[x][y][j]);
                }
                else
                {
                    rep(i, 0, N) upd(i, y, S[x][y][i]);
                }
            }
        }
    }
    rep(i, 0, N)
    {
        rep(j, 0, N) cout << ans[i][j];
        cout << "\n";
    }

}