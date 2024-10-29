#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    long long res=0;
	    int i=0;
	    while(i<n)
	    {
	        int j=i;
	        while(j<n)
	        {
	            if(arr[i]==arr[j]) j++;
	            else 
	            {
	                break;
	            }
	        }
	        res+=( long long )(( long long )(j-i)*(j-i+1))/2;
	        i=j;
	    }
	    cout<<res<<endl;
	}

}
