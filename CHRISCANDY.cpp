#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tt;
    cin>>tt;
    while(tt--)
    {
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++)
       cin>>arr[i];
       vector<int>nge(n);
      vector<int>ans(n);
    stack<int>dot;
    for(int i=0;i<n;i++)
    {
        while(!dot.empty() && arr[i]>arr[dot.top()])
        {
            ans[dot.top()]=i;
            dot.pop();
        }
        dot.push(i);        
    }
    if(!dot.empty())
    {
        while(!dot.empty())
        {
            ans[dot.top()]=n;
            dot.pop();
        }
    }
    int prev=-1;
    for(int i=0;i<n;i++)
    {
        if(ans[i]<=prev)
        ans[i]=0;
        else
        prev=ans[i];
    }
    int tot=0;
    for(int i=0;i<n;i++)
    {
        if(ans[i])
        tot+=ans[i]-i-1;
    }
    cout<<tot<<'\n';
    }
}
