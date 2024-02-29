#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n]={0};
	int b[n]={0};
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  for(int i=0;i<n;i++)
	    cin>>b[i];
	vector<int>v;
	 for(int i=0;i<n;i++){
	     v.push_back(a[i]);
	     v.push_back(b[i]);
	 }
	 sort(v.begin(),v.end());
	 int res=1;
	 vector<int>v1;
	 for(int i=1;i<2*n;i++){
	     if(v[i]==v[i-1]){
	         res++;
	     }
	     else
	       {
	           v1.push_back(res);
	           res=1;
	       }
	 }
	 if(res>1)
	  v1.push_back(res);
	  res=*max_element(v1.begin(),v1.end());
	  cout<<res<<endl;
	}
	return 0;
}
