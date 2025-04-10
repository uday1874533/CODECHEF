#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI 3.141592653589793238462643383279502884L
#define make_unique(vec) vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())))
#define Sort(vec) sort(vec.begin(),vec.end())
#define RSort(vec) sort(vec.rbegin(),vec.rend())
#define endl "\n"
#define show(i); cout<<i<<" ";
#define tr1(i); cout<<i<<endl;
#define tr2(i,j); cout<<i<<" "<<j<<endl;
#define tr3(i,j,k); cout<<i<<" "<<j<<" "<<k<<endl;
#define vvi vector<vector<int> > 
#define vvl vector<vector<lli> >
#define all(st) st.begin(),st.end()
#define vpll vector<pair<lli,lli> >
#define vpii vector<pair<int,int> >
#define pi pair<int,int>
#define pl pair<lli,lli>
#define al vector<list<int> >
#define vs vector<string>
#define vi vector<int>
#define vb vector<bool>
#define vl vector<lli>
#define vc vector<char>
#define rep(i,l,r) for(int i=l;i<r;i++)
#define repit(st) for(auto it=st.begin();it!=st.end();it++)
#define ulli unsigned long long int
#define eb emplace_back
#define pb push_back
#define lli long long int
#define inf INT_MAX
#define minf INT_MIN
#define f first
#define se second
#define mod 1000000007
#define mx 500001
using namespace std;
void add_me(lli &a,lli b){
    a+=b;
    if(a>=mod) a-=mod;
}   
void sub_me(lli &a,lli b){
    a-=b;
    if(a<0) a+=mod;
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
	if(a.se==b.se) return a.f<b.f;
    return (a.se < b.se); 
}
struct disjointset{
    int parent[mx];
   	disjointset(){
        for(int i=1;i<mx;i++) parent[i]=i;
    }
    int find(int x){
      	int par=parent[x];
        if(par==x) return x;
        return parent[x]=find(parent[x]);
    }
    void union_(int x,int y){
   	    int par1=find(x);
     	int par2=find(y);
       	if(par1==par2) return;
       	parent[par2]=par1;
    }
};
lli mi(lli n,lli m){
	lli pw=n;
	lli ex=m-2;
	lli ans=1;
	while(ex){
		if(ex&1) ans = ans*pw%m;
		pw = pw*pw%m;
		ex>>=1;
	}
	return ans%m;
}
const int pm = 1000000;
int spf[pm+1];
bool is_prime[pm+1];
void prime_solver(){
	memset(is_prime,true,sizeof(is_prime));
	for(int i=1;i<=pm;i++) spf[i]=i;
	for(int i=2;i*i<=pm;i++){
		if(is_prime[i]){
			for(int j=i*i;j<=pm;j+=i){
				is_prime[j]=false;
				if(spf[j]==j) spf[j]=i;
			}
		}
	}
}
int main(){
	FIO;
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> vec(n);
		rep(i,0,n) cin>>vec[i];
		vl pre(n);
		pre[0]=vec[0];
		rep(i,1,n) pre[i]=pre[i-1]+vec[i];
		set<int> st[7];
		rep(i,0,n){
			st[pre[i]%7].insert(i+1);
		}
		int ans=0;
		st[0].insert(0);
		for(int i=0;i<7;i++){
			if(st[i].size()<=1) continue;
			ans=max(ans,*st[i].rbegin()-*st[i].begin());
		}
		cout<<ans<<endl;
	}
	
}