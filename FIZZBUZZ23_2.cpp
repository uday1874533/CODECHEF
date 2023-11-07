#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i=0;i<t;i++) {
	    int n,x,d;
	    cin>>n>>x>>d;
	    auto s = int(n/(5*x));
	    cout<<s+d<<endl;
	}
	return 0;
}