#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int cnt=0;
	    string req="ADVITIYA";
	    for(int i = 0 ; i < s.size() ; i++)
	    {
	        int c=s[i]-'A';
	        int t=req[i]-'A';
	        int diff=(t-c+26)%26;
	        cnt+=diff;
	    }
	    cout<<cnt<<endl;
	}

}
