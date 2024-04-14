
/*  Write a C++ program to print right oriented right angled pyramid. 
      1
    2 3
  4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;
int main()
{
  int rows ;
  int k=1;
  cout<<"Enter the number of rows"<<endl;
  cin>>rows;

  for(int i=1; i<=rows; i++)
  {   
    for(int k=0; k<rows-i+1; k++) 
    {
      cout<<"  ";
    }
    
    for(int j=1; j<=i; j++)
    {    
         cout<<k<<" ";
         k++;
    }
    cout<<endl;
    
  }
  return 0;
}
