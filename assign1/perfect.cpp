// program to check whether the given number is perfect or not.
/*
  perfect  numbers are the numbers ,whose sum of all 
 factors of that number is eqaul to that number.
*/

#include <iostream>
using namespace std;

int main ()
{
  int no,sum=0;
  cout<<"enter the number"<<endl;
  cin>>no;

  cout<<"the factors of the "<< no <<" are :"<<endl;

  for (int i = 1; i <= no/2; i++)
  {
      if (no % i == 0)
      { 
        cout<<i<<endl;
        sum=sum+i;

      }
  }
  if(sum == no) 
   cout<<"The no is perfect"<<endl;
  else
   cout<<"The sum is not perfect"<<endl;

   return 0;
}
