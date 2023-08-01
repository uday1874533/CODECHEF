
#include <iostream>
using namespace std;

int main()
{
    
    // BEN STOKES
    //1 = 
    // u tesko ra hooka 
    

	int u;
	cin>>u;
	
	while(u--)
	{
	    int a,b;
	    cin>>a>>b;
	    if((100-100*a/100) <(200-200*b/100)){
	        
	        cout<<"first"<<endl;                      // break after lun
	    }
	    else if((100-100*a/100) >(200-200*b/100)){
	        cout<<"second"<<endl;
	    }
	    else{
	        cout<<"both"<<endl;
	    }
	}
	return 0;
}
// chair ni fold chesi mingthey
