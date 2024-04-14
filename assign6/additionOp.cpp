// Overloding unary plus operator.

#include<iostream>
using namespace std;

class Add
{
  int value;

  public:
    Add(int value) : value(value) {}

  void operator +()
  {
    int sum ;
    sum = value + 10;

    cout << "The sum is " << sum << endl;
  }
};

int main()
{
  Add a(10);
  Add a1(20);

  +a;
  +a1;
  return 0;
}