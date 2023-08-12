#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x=max(a,b);
	    int y=max(c,d);
	    cout<<x+y<<endl;
	}
}
   