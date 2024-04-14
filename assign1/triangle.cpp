// program to print triangle shape pattren
#include<iostream>
using namespace std;
int main()
{
  int rows ;
  
  cout<<"Enter the number of rows"<<endl;
  cin>>rows;

  for(int i=1; i<=rows; i++)
  {   
    for(int k=0; k<rows-i; k++) 
    {
      cout<<"  ";
    }
    
    for(int j=1; j<=i; j++)
    {    
         cout<<"*"<<"   ";
        
    }
    cout<<endl;
  }
  return 0;
}
