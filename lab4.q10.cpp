#include<iostream>
#include<cmath>
using namespace std;
int main(){
float p,t,r,x,ci;

cout<<"type the principle"<<endl;
cin>>p;

cout<<"type the time"<<endl;
cin>>t;

cout<<"type the rate of inerest"<<endl;
cin>>r;

x=p*pow((1+r/100),t);

ci=x-p;


cout<<"compound interest="<<ci<<endl;

return 0;
}  


