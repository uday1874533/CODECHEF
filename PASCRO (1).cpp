//   01100001  01110010  01110101    01101110
//   /¯¯/\¯¯\  l¯¯l)¯¯) /¯¯/ /¯¯/ /¯¯/¯\  /¯¯/
//  /__/¯ \__\ l__l\__\ \__\/__/ /__/\__\/__/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f first
#define s second
#define be begin()
#define e end()
#define pb push_back
#define pop pop_back()
#define si set<ll>
#define vi vector<ll>
#define pi pair<ll,ll>
#define mi map<ll,ll>
#define sz(n) ((int)n.size())
#define all(p) p.begin(), p.end()
#define double long double
#define FOR(A, B) for (int i = A; i < B; i++)
/*ll mod=1000000007;
ll sieve[1000000007]={0};
void createsieve(){
    sieve[0]=sieve[1]=1;
    for(int i=2;i*i<=mod;i++){
        if(sieve[i]==0){
            for(int j=i*i;j<=mod;j+=i){
                sieve[j]=1;
            }
        }
    }
}*/
int row[8]={1,-1,0,0,1,1,-1,-1};
int col[8]={0,0,1,-1,1,-1,-1,1};
int count_digit(ll n){
    return(int(log10(n))+1);
} 
ll gcd(ll a,ll b){
    if(a%b==0)return b;
    return gcd(b,a%b);
}
void arun(){
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll c1=0,c2=0;
    for(ll i = 0 ; i < n ; i+=1){
        if(s1[i]=='R'){
            if(s2[i]=='P'){
                c2+=1;
            }
            else if(s2[i]=='S'){
                c1+=1;
            }
        }
        else if(s1[i]=='P'){
            if(s2[i]=='S'){
                c2+=1;
            }
            else if(s2[i]=='R'){
                c1+=1;
            }
        }
        else if(s1[i]=='S'){
            if(s2[i]=='R'){
                c2+=1;
            }
            else if(s2[i]=='P'){
                c1+=1;
            }
        }
    }
    // cout<<c1<<" "<<c2<<endl;
    ll d=c2-c1;
    if(d<0){
        cout<<0<<endl;
    }
    else{
            cout<<d/2+1<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)arun();
	return 0;
}
