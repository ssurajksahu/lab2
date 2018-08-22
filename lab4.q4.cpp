#include<iostream>
using namespace std;
int main(){
int d,w,y,r;

cout<<"enter no. of days=";
cin>>d;

w=d/7;
r=d% 7;

cout<<"no. of week="<<w<<"and days="<<r<<endl; 

y=d/365;
cout<<"no. of years="<<y<<endl;




return 0;
}




