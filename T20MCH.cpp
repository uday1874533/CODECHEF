#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
// INTA STORY 
// VEDA FRI
int a,b,c;
cin>>a>>b>>c;

int count = 20 - b;
count = 36 * count;
count= c + count;

if(count>a){
cout<<"Yes"<<endl;    
} 
else{
cout<<"No"<<endl;    
}
return 0;
}


