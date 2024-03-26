#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

ll mypow(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll res=mypow(a,b/2);
    if(b%2!=0){
        return ((a*res*res)%M);
    }
    else{
        return ((res*res)%M);
    }
}

void solve(){
    
        int n;
        cin >> n;
        ll ans;
        ans = mypow(2, n - 1);
        ans = ans % M;
        cout << ans << endl;
    
  // EE SALA CUO NAMDE
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}