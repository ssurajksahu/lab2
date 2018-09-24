//tax rate calculation using function
#include <iostream>
using namespace std;

/* write a function that obtainns from the user and returns a value for unitCst,units and taxRt to the calling module.Choose an appropriate name for this function  */

    int values(int &unitCst, int &unit, int &taxRt){
              cout<< "enter value for unit cost-"<<endl;
              cin>>unitCst;
              cout<<"enter  value for unit purchase-"<<endl;
              cin>>unit;
              cout<<"enter value for total due-"<<endl;
              cin>>taxRt;
                  }

           /* returning to the calling module the salesTx and totDue */

       int calculations(int unitCst, int unit, int taxRt, int &salesTx, int &totDue){

               values( unitCst, unit,taxRt);
               salesTx=(unitCst*unit*taxRt);
               totDue=(unitCst*unit)+salesTx;
                   }
         /* write a main function with varables called unitCost, unitsPurch, taxRate,salesTax and totalDue.Your programme should call the functions listed above */
         int main(){
               // declaring variables
                int unitCst,unit,taxRt,salesTx,totDue;
                calculations(unitCst,unit,taxRt,salesTx,totDue);

              // keeping values
             cout<< "the sales tax is"<<salesTx<<" and"<< "total due is "<<totDue<<endl;
 return 0;
}

 
