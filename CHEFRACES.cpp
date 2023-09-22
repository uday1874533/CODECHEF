#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x[2],a[2],count=0;
        for(int i=0;i<2;i++){
            cin>>x[i];
        }
        for(int i=0;i<2;i++){
            cin>>a[i];
        }
        for(int i=0;i<2;i++){
            if(x[i]!=a[0] && x[i]!=a[1])
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
