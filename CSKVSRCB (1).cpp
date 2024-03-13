#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9+7
#define vi vector<ll>
#define vvi vector<vi>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define ss second
#define ff first
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//  EE SALA CUP NAMDE
//  THALA AND KING 



template <typename T> ostream& operator<<(ostream& os, vector<T>& v) {
  
  for(auto element : v) {
 
    os << element << " ";
  }
 
  return os;
}

bool isValid(int i,int j,int m,int n){
	return (i>=0 && i<m && j>=0 && j<n);
}

int solve2(vector<vector<int>>&v,vector<vector<int>>&sol, int m, int n, int i, int j, int x,int y, int p)
{
	if(i==(x-1)&&j==(y-1)){
		if(p == v[x-1][y-1])
			return 1;
		else
			return 0;
	}
	if(!isValid(i,j,m,n))
		return 0;
	if(sol[i][j] == 1 || v[i][j]!=p)
		return 0;
	sol[i][j] = 1;
	int a = solve2(v,sol,m,n,i+1,j,x,y,p);
	int b = solve2(v,sol,m,n,i,j+1,x,y,p);
	int c = solve2(v,sol,m,n,i-1,j,x,y,p);
	int d = solve2(v,sol,m,n,i,j-1,x,y,p);
	if(a||b||c||d)
		return 1;
	sol[i][j] = 0;
	return 0;

}

void solve() {
	int m,n;
	cin>>m>>n;
	vector<vector<int>> a;
	int p;
	for(int i=0;i<m;i++)
	{
		vector<int>v2;
		for(int j=0;j<n;j++){
			cin>>p;
			v2.pb(p);
		}
		a.pb(v2);
	}
	int x1,x2,y1,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	vector<vector<int>> sol(m,vector<int>(n,0));
	int ans = solve2(a, sol,m,n,x1-1, y1-1, x2,y2,a[x1-1][y1-1]);
	if(a[x1-1][y1-1] == 1){
		if(ans == 1)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	else{
		if(ans == 0)
			cout<<"1\n";
		else
			cout<<"0\n";
	}

}


int main()
{
    fast
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }  
    
    
   return 0;
}