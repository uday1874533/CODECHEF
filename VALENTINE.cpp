#include <bits/stdc++.h>
// ST CHEY RAA
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x<y)
	    {
	        cout<<0<<endl;
	    }
	    else{
	        cout<<int(x/y)<<endl;
	    }
	}
	return 0;
}
