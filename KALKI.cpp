#include <bits/stdc++.h>
using namespace std;


// PRABHAS AS KALI
// AMITABH AS ASHWADDHAMA
// KAMAL HASAN AS KALI
// DEEPIKA
// DISHA PATANI 
// NTR AS PARASURAM
// DQ, NANI, VDK, RGV , RAJAMOULI ......
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a, b;
        vector<vector<int>> v;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            v.push_back({a,b,i+1});
        }
        sort(v.begin(),v.end());
        for(int i=0; i<n-1; i++){
            cout<<v[i][2]<<" "<<v[i+1][2]<<endl;
        }
    }
    return 0;
}