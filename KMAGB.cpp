#include <bits/stdc++.h>
using namespace std;
#define ll long long
// KING KOHLI
ll getSumUpto(vector<ll>& arr, ll k){
    // int nat = k+1;
    ll ans = 0;
    for(ll i = 0 ; i <= k; i++){
        ans += (k-i+1)*arr[i];
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n ;
    bool containsNeg = false;
    vector<ll> arr(n);
    for(ll i = 0; i < n ; i++){
        cin >> arr[i];
        if(arr[i]<0) containsNeg = true;
    }
    cin >> k;
    sort(arr.begin(), arr.end());

    if(containsNeg){
        cout <<n << endl;
        for (ll i = 0; i <n ;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return ;
    }
    ll start = 0;
    ll end = arr.size()-1;

    ll fa = 0;
    bool used = false;
    while(end>=start){
        ll mid = (start+end)/2;
        ll la = getSumUpto(arr,mid);
        if(la<k){
            fa = mid;
            used = true;
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    if(used){
        // if (getSumUpto(arr,n)<k){
        //     fa= n;
        // }
        // bool used22 = false;
        cout << fa+1  << endl;
        for (ll i = 0; i <=fa; i++){
        //  usedw =  
            cout << arr[i] << " ";
        }
        cout << endl;

    }
    else{
        cout << 0 << endl;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
        solve();
	return 0;
}
