#include<iostream>
using namespace std;
int main(){
float p,t,r,si;

cout<<"enter principle"<<endl;
cin>>p;


cout<<"enter time for which you saved"<<endl;
cin>>t;


cout<<"enter rate of interest"<<endl;
cin>>r;

si=(p*t*r)/100;

cout<<"your simple interest="<<si<<endl;

return 0;
}
