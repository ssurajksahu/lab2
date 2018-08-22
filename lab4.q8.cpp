#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a,b,c,s,area;


cout<<"enter the three sides of a triangle"endl;
cin>>a;
cin>>b;
cin>>c;

s =(a+b+c)/2;

area= sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"area of the triangle="<<area<<endl;

return 0;
} 

