#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	 // virat kohli 18 sh callimf introvert
	   
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    if(n>=1 && n<=10)
	    {
	        cout<<"Lower Double"<<endl;
	    }
	    else if(n>=11 && n<=15)
	    {
	        cout<<"Lower Single"<<endl;
	    }
	    else if(n>=16 && n<=25)
	    {
	        cout<<"Upper Double"<<endl;
	    }
	    else 
	    {   
	        cout<<"Upper Single"<<endl;
	    }
	} 
	return 0;
}
// front 2 back // bot gadu 