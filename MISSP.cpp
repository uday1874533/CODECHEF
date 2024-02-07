#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>Arr[i];
        }
        int ans=0;
        for(int i=0;i<N;i++)
        {
            ans^=Arr[i];
        }
        cout<<ans<<endl;
    }
}