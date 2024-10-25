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
	vector<int>vec(n+1);
	for(int i=0;i<n+1;i++) cin>>vec[i];
	int last_dig=vec[n];
	int cur =2*last_dig;
	int max_val=last_dig;
	sort(vec.begin(),vec.end());
	int sum=0;
	for(int i=0;i<n+1;i++)
	{
	    sum+=vec[i];
	    if(cur>=vec[i])
	    {
	        max_val=max(max_val,vec[i]);
	        cur=max(cur,2*vec[i]);
	    }
	}
	int t_sum=abs(sum-max_val);
	cout<<t_sum<<endl;
	
	
	}

}
