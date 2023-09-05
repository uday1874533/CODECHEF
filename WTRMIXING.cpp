#include <iostream>
//Header files
using namespace std;
//Initializing th code
int main() {
	int T;
	cin>>T;
	//Executing the loop
	while(T--){
	    int m,n,o,p;
	    cin>>m>>n>>o>>p;
	    int vilon = m-n;
	    if(vilon==0)
	    cout<<"YES"<<endl;
	    else if(vilon<0){
	        if(abs(vilon)<=o)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        }
	        else{
	            if(abs(vilon)<=p)
	            cout<<"YES"<<endl;
	            else
	            cout<<"NO"<<endl;
	        }
	}
}
//Done by Nandan