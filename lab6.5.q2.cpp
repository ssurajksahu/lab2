//library
#include <iostream>
using namespace std;

/* f1()=no. of sales, f2()= salary and 10% commission on sales,  f3()= 20% commission and 20/- for each shoe*/

int f1(int nsales){
         cout<<"enter no. of sales in that week"<<endl;
         cin>>nsales;
   return nsales;
                  }

int f2(float comm10){
        int nsales;
          comm10=280+(nsales*22.5);
           cout<<" total salary after 10% commission="<<comm10<<endl;
   return comm10;
               }

int f3(float comm20){
         int nsales;
           comm20= (nsales*20) +(nsales*(22.5*2));
           cout<<" total salary after 20% commission="<<comm20<<endl;
   return comm20;
                 }


// comparing salaries

void comp(float comm10, float comm20){
          
          f2(comm10);
          f3(comm20);
     
             if(comm10>=600){
                 if(comm10>comm20){
                    cout<<" 10% commission is best method"<<endl;
                                }}

           if(comm20>600){
                     if(comm20>=comm10){
                   
                 
                    cout<<" 20% commission is best method"<<endl;
                       } }
             else  
                 cout<<" 600 per week is best method"<<endl;
                          }

   //driver function
 int main(){

       int nsales,comm10,comm20;

        
        f1(nsales);
        f2(comm10);
        f3(comm20);
        comp(comm10,comm20);

return 0;
}
     










               

