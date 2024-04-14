/*
 Write a program to find sum of numbers between 1 to n using constructor where value of n will be passed to the constructor.
*/
#include<iostream>
using namespace std;

class Sum
{
    int ub;

    public:
     Sum( int ub = 10 )
     {
          this->ub = ub;
     }

     void sum()
     {
       int total = 0;
        for( int i = 1; i <= ub; ++i )
        {
          total += i;
        }

        cout << "the sum is " << total << endl;
     }
};

int main()
{
  int ub;
  cout << " Enter the last element " << endl;
  cin >> ub;

  Sum s(ub);

  s.sum();

  return 0;
}