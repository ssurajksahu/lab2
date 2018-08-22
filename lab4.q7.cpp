#include<iostream>
using namespace std;
int main(){

float p,b,m,c,cs,Tm,avg,permark;

cout<<"enter marks of your five subjects each of from 100"<<endl;
cout<<"Physics=";
cin>>p;

cout<<"Biology=";
cin>>b;

cout<<"Mathematics=";
cin>>m;

cout<<"Chemistry=";
cin>>c;

cout<<"Computer Science=";
cin>>cs;

Tm =p+b+m+c+cs;
cout<<"Your total marks in exam="<<Tm<<endl;

avg =(p+b+m+c+cs)/5;
cout<<"Your average marks in exam="<<avg<<endl;

permark=((p+b+m+c+cs)/500)*100;
cout<<"Your percentage of mark in exam="<<permark<<endl;

return 0;
}


