#include<iostream>
using namespace std;

  //writing function for sum of even numbers


int sumEvenNumbers(int a, int b,int sumEven ){
   int i;
   
   for(i=a;i<=b;i++){   
             if (i%2==0){
       	
       sumEven=sumEven+i;
                 
         }
             }
   return sumEven; 
}

//writing function for sum of odd numbers

int  sumOddNumbers(int a, int b, int sumOdd){
      int i;
      for(i=a;i<=b;i++){   
              if (i%2==1){
       
       sumOdd=sumOdd+i;
                 
         }
             }
   return sumOdd; 
}

//writing function for sum of square of odd numbers


int  sumsqOddNumbers(int a, int b, int sumsqOdd){
      int i;
      for(i=a;i<=b;i++){   
             if (i%2==1){
       
       sumsqOdd=sumsqOdd+(i*i);
                 
         }
             }
   return sumsqOdd; 
}

//writing function for sum of square of even numbers
int  sumsqEvenNumbers(int a, int b, int sumsqEven){
      int i;
      for(i=a;i<=b;i++){   
             if (i%2==0){
       
       sumsqEven=sumsqEven+(i*i);
                 
         }
             }
   return sumsqEven; 
}


/* 5. write a main programme.
      a. Declare a variable called sumEven in the main() for the  sumEvenNumbers().sumEvenNumbers() is a value returning function . use sumEven to hold a returned value.
      b. Declare a variable called sumOdd in the main() for the  sumOddNumbers().sumEvenNumbers() is a value returning function . use sumOdd to hold a returned value.
      c. Declare a variable called sumsqEven in the main() for the  sumsqEvenNumbers().sumsqEvenNumbers() is a value returning function . use sumsqEven to hold a returned value. 
      d. Declare a variable called sumsqOdd in the main() for the  sumsqOddNumbers().sumsqOddNumbers() is a value returning function . use sumsqOdd to hold a returned value.
       e. displaying values.  */


    int main(){
         int a,b,c=0, sumEven, sumOdd,sumsqEven,sumsqOdd;

            cout<<"enter two numbers-"<<endl;
            cin>>a>>b;


         sumEven=sumEvenNumbers(a,b,c);
         cout<<"sum of two even numbers-"<<sumEven<<endl;

         sumOdd=sumOddNumbers(a,b,c);
         cout<<"sum of two odd numbers-"<<sumOdd<<endl;
   
         sumsqEven=sumsqEvenNumbers(a,b,c);
         cout<<" sum of square of even numbers-"<<sumsqEven<<endl;

         sumsqOdd=sumsqOddNumbers(a,b,c);
         cout<<" sum of square of odd numbers-"<<sumsqOdd<<endl;

return 0;
}
            






 





      

        
        
      
        
