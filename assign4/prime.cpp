/*
Write a c++ program that determines a given number is prime or nor (use Dynamic Constructor to allocate and Destructor to free memory of an object)
*/
#include<iostream>
using namespace std;

class Prime
{
 int *no;

 public:
 Prime(int n)
 {
  no = new int;
  *no = n;
 }
 
void isPrime()
 {
  int flag = 0;
  if(*no == 0)
  {
    exit(0);
  }
  else 
  {
    for(int i = 2; i < *no/2 + 1; i++)
    {
      if(*no % i == 0)
      flag = 1;
      break;
    }
    if(flag == 1)
    {
      cout << "\nNumber is not prime" << endl;
    }
    else
    {
      cout << "\nNumber is prime" << endl;
    }
  }
 }
 ~Prime()
 { 
   delete no;
   cout << "Object destroyed successfully!" << endl;
   
 }
};

int main()
{
 int no;
 cout << "Enter the number to check:";
 cin >> no;
 Prime p(no);
 p.isPrime();

  return 0;
}