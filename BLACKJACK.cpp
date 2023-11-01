#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t; 
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a+b<=10)
	    cout<<-1<<endl;
	    else
	    cout<<21-(a+b)<<endl;
	    
	}
	return 0;
}
