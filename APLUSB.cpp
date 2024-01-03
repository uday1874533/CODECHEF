#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()

int main(){
    ll t;
    cin >> t; // Input the number of test cases

    while(t--){
        ll n;
        cin >> n;
        
        ll maxx = LLONG_MIN;
        ll minn = LLONG_MAX;
        
        vll a(n), b(n);
        
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            maxx = max(maxx, a[i]);
        }
        
        for (ll i = 0; i < n; i++){
            cin >> b[i];
            minn = min(minn, b[i]);
        }
        ll sum = maxx + minn;
        bool flag = false;
        
        sort(all(a));
        reverse(all(a));
        sort(all(b));
        
        for(ll i = 0; i < n; i++){
            if (a[i] + b[i] != sum){
                cout << -1 << endl;
                flag = true;
                break;
            }
        }
        
        if(!flag){
            for (auto &i : a){
                cout << i << " ";
            }
            cout << endl;
            
            for(auto & i : b){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
