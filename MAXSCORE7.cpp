#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin>> t;
    
    while (t--){
        int n;
        cin>> n;
        int arr[n];
        
        for (int i =0 ; i < n; i++)
        cin >> arr[i];
        
        stack<int> st;
        st.push(arr[0]);
        
        int ans =0 ;
        for(int i = 1 ; i < n; i++) {
            int val = arr[i];
            
            if (st.size() == 0){
                st.push(val);
            } else {
                int top = st.top();
                if(top == val){
                    st.push(val);
                } else {
                    st.pop();
                    ans++;
                }
            }
        }
        cout<< ans << endl;
    }
     return 0;
}