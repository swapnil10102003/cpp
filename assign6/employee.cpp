/*
  Write a C++ program to create a class employee containing salary as a data member. Write necessary member fimetions to overload the operator unary pre and post decrement"-" for incrementing
  and decrementing salary.
*/
#include<iostream>
using namespace std;

class Employee
{
  private:
    int eid;
    string name;
    double salary;

  public:
   Employee() {}
   Employee(int id, string name, double salary) : eid(id), name(name), salary(salary) {}

  void display()
  {
    cout << "Employee Details:" << endl;
    cout << eid << "  " <<  name << "  " << salary << endl;
  }

  int operator --()
  {
    --this->salary;
    return this->salary;
  }

  int operator --(int)
  {
    this->salary--; 
    return this->salary;
  }

};

int main()
{
  Employee emp(10,"swapnil",50000);
  Employee emp1;
  int temp;

  emp.display();
  
  

  temp = --emp;
  cout << "\nAfter pre-decrement:" << temp << endl;
  //emp.display();

  temp = emp--;
  cout << "\nAfter post-decrement:" << temp << endl;
  //emp.display();



  return 0;
}