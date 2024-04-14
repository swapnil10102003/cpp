// Write a C++ program to generate multiplication table.


#include<iostream>
using namespace std;
int main()
{
  int no;
  int sum=0;
  cout<<"Enter the number to print the multiplication table";
  cin>>no;

  cout<<"multiplication table"<<endl;

  for(int i=i;i<=no;i++)
  {   sum=no*i;
    cout<<no<<"*"<<i<<" = "<<sum<<endl;
  }
  return 0;
}