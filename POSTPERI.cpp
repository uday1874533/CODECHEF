#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++){
        int l,b,m;
        scanf("%d%d%d",&l,&b,&m);
        int diff;
        int d=10000000;
        for (int i=l; i>0; i--){
            for (int j=b; j>0; j--){
                int p=2*(i+j);
                diff =abs(p-m);
            
            if (diff<d){
                d=diff;
            }
            }
        
        }
       
            printf("%d\n",d);
        
    }
}
