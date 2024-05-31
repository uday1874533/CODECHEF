#include <bits/stdc++.h>



//  MAY 30 SHADOW HEATWAVE




//    
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define debug(x) cerr << (#x) << "is "<< x << "\n"
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10;

void test();

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1;
	cin >> tt;
	f(i,0,tt)
		test();
	return 0;
}

void test(){
	ll a,b,l,r;
	cin >> a >> b >> l >> r;
	if(l>r){
		swap(l,r);
		// cout << "TRUE LOVE\n";
		// return;
	}
	// First:
	ll st1 = ceil(l*1.0/a)*a , en1 = (r/a)*a ,s1 =0 ;
	if(st1<=en1){
		ll terms = (en1-st1+a)/a;
		s1 = (terms*(st1+en1))/2;
	}

	//Second:
	ll st2 = ceil(l*1.0/b)*b , en2 = (r/b)*b ,s2 =0 ;
	if(st2<=en2){
		ll terms = (en2-st2+b)/b;
		s2 = (terms*(st2+en2))/2;
	}	

	ll c = (a*b)/__gcd(a,b);
	ll st3 = ceil(l*1.0/c)*c , en3 = (r/c)*c ,s3 =0 ;
	if(st3<=en3){
		ll terms = (en3-st3+c)/c;
		s3 = (terms*(st3+en3))/2;
	}	
	// cout << s1 << " " << s2 << " " << s3 << "\n";
	int cnt = 0;
	if((s1+s2-s3)%2==0) cnt++;
	if((s1+s2)%3==0 or (s1+s2)%2==0) cnt++;
	if(cnt==2){
		cout << "TRUE LOVE\n";
	}
	else if(cnt==1){
		cout << "LOVE\n";
	}
	else{
		cout << "FAKE LOVE\n";
	}
}