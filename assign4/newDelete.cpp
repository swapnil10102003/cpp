// Writea program to create memory space using the new keyword and to destroy it using delete keyword
#include<iostream>
using namespace std;

int main()
{
  int *num;
  num = new int; // allocate memory dynamically 

  *num = 10; // to assign value to a variable use  '*' sign.

  cout << *num << endl;

  delete num; // free memory which was allocated dynamically.
 
  return 0;
}