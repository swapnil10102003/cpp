// Overloding unary plus operator.

#include<iostream>
using namespace std;

class Number
{
  int value;

  public:
    Number() = default;
    Number(int value) : value(value) {}

  int operator ++()
  {
    ++this->value;
    return this->value;
  }

  int operator ++(int)
  {
    this->value++; 
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
  
  cout << "preincrement ";
  ++a;
  a.display();
  
  cout << "postincrement ";
  a1++;
  a1.display();
  return 0;
}