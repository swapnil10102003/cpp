/*
 Write a CH program to create a class Array that contains one float array as member. Overload the Unary and operators to increase or decrease the value of each element of an array. Use friend function for operator function.
*/
#include<iostream>
using namespace std;

class Array
{
  private:
   int size;
   float* data;

  public:
  Array(int size) : size(size)
  {
    data = new float[size];
  }

  ~Array()
  {
    delete[] data;
  }

  void acceptValues()
  {
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
      cin >> data[i];
    }
  }

  void displayValues()
  {
    cout << "Array elements are:" << endl;
    for (int i = 0; i < size; i++)
    {
      cout << data[i] << " ";
    }
  }

  friend void operator ++(Array& a);
  friend void operator --(Array& a);
};

void operator++(Array &a)
{
  for (int i = 0; i < a.size; i++)
  {
    ++a.data[i];
  }
}

void operator--(Array &a)
{
  for (int i = 0; i < a.size; i++)
  {
    --a.data[i];
  }
}

int main()
{
 int n;
 cout << "Enter the size of the array:" << endl;
 cin >> n;
 
 Array arr(n);
 Array arr1(n);
 
 arr.acceptValues();
 arr.displayValues();

 ++arr; // call for operator ++ function.
 cout << endl << "After increment the ";
 arr.displayValues();

cout << endl << "********************************" << endl;

 arr1.acceptValues();
 arr1.displayValues();

 --arr1; // call for operator -- function.
 cout << endl <<"After decrement the ";
 arr1.displayValues();
  return 0;
}