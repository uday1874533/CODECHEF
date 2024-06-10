#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int GTX; std::cin >> GTX;
    while(GTX>0)
    {
        int n, c=0; cin>>n;
        string s; cin>>s;
        for(int i=1; i<n; i++)
        {
            if(s[i-1]!=s[i])c++;
        }
        
        cout<<c+1;
        cout<<"\n";
        GTX--;
    }
    	
	return 0;
}

