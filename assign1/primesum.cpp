/* program to express the given number in the form of sum
 of two prime numbers between 0 to that number.
*/

#include <iostream>
using namespace std;
int main ()
{
  int no,count = 0;
  int arr[20];
  int k = 0,flag = 0,temp=2,sum=0;
  int j,i,x;

  cout<<"enter the number"<<endl;
  cin>>no;
  
  cout<<"the prime numbers are :"<<endl;

 while(temp<=no) 
 {      flag = 0;
        for ( i = 2; i <temp; i++)
        {
            if ( temp % i == 0) 
            {
              flag = 1;
            }
        }   
      if(flag == 0)
      {   
          arr[k++] = temp;
          count++;
      }
     temp++;
 }
   for( i = 0; i <count; i++)
   {
    cout<<arr[i]<<" ";
   }
  
   for(i = 0; i <count; i++)
   {
    for( j = i+1; j <count; j++) 
    {  
      sum = arr[i] + arr[j];
      x = arr[j];

      if(sum==no)
      {
      cout<<endl<<"The sum of "<<arr[i]<<" and "<<x<<" is equal to "<<no<<endl;
      }
    }
      

   }
}
