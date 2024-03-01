#include <bits/stdc++.h>
#define ll long long
#define fora(i,m,n)  for(int i=m;i<n;i++)
using namespace std;

void solve(){
    ll n;
	cin>>n;
	
	string s;
	cin>>s;
	
	ll count=1;
	//atleast one element is maximum
	fora(i,0,n-2){
	    if(s[i]=='1' && s[i+1]=='0')
	    //if the pair '10' comes that's where the conflict occurs
	    //as the element being represented by 1 is either smaller than previous number '010' and suddenly is smaller than the next number too giving an ambiguity that whether the number before or after is maximum
	    //the 1 element can also be greater than the previous element '110' and now the next element is refering that it is smaller than the next to next number causing the ambiguity in the maximum element
	        count++;
	}
	cout<<count;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	    cout<<endl;
	}
	return 0;
}
