// Write a C++ program to display factors of a number.


#include <iostream>
using namespace std;

int main ()
{
  int no;
  cout<<"enter the number"<<endl;
  cin>>no;

  cout<<"the factors of the "<< no <<" are :"<<endl;

  for (int i = 1; i <= no; i++)
  {
      if (no % i == 0)
      {
        cout << i <<"\t";

      }
  }
  
}
