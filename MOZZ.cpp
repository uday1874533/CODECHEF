#include <bits/stdc++.h>
using namespace std;
// DIFFERENT LOOK BHAYYAAAA
int main()
{
    int T,i,N,j,Y,R,X;
    
    cin>>T;
    while(T--)
    {
        cin>>X>>Y>>R;
    
    int extra;
    extra = R/30;
    int total=X+extra;
    if(total%Y == 0) cout<<total/Y<<endl;
    else cout<<total/Y+1<<endl;
    }
	return 0;
}
