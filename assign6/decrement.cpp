// Overlosding pre and post decrement operator.

#include<iostream>
using namespace std;

class Number
{
  int value;

  public:
    Number() = default;
    Number(int value) : value(value) {}

  int operator --()
  {
    --this->value;
    return this->value;
  }

  int operator --(int)
  {
    this->value--; 
    return this->value;
  }

  void display()
  {
    cout << "value: " << this->value << endl;
  }
};

int main()
{
  Number a(10);
  Number a1(20);
  Number a2;
  
  cout << "pre-decrement ";
  a2 = --a;
  a2.display();

  
  cout << "post-decrement ";
  a2 = a1--;
  a2.display();
  return 0;
}