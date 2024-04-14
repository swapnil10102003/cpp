#include<iostream>
using namespace std;
int main()
{
   int no;
    int fact = 1;

   cout<<"enter the number"<<endl;
   cin>>no;

   for (int i = 1; i <= no; i++)
   {
      fact = fact * i;
      
   }
   
 cout<< "the factorial of  " << no << " is " << fact <<endl;
   

   return 0;
}
