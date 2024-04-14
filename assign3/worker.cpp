/*
 Write a C++ program to create a class Worker that has data members as Worker Name. No_of_Days_worked Pay Rate. Create and initialize the object using default constructor. parameterized constructor and copy constructor.
*/
#include<iostream>
using namespace std;

class Worker
{
  string name;
  int noOfDays;
  float payRate;

  public:
  Worker() // default constructor
  {
    this->name = "Abhay";
    this->noOfDays = 10;
    this->payRate = 275.5;
  }
  Worker(string name, int days, int rate) // pramitrized contructor
  {
    this->name = name;
    this->noOfDays = days;
    this->payRate = rate;
  }
  Worker(Worker &w) // copy constructor
  {
    this->name = w.name;
    this->noOfDays = w.noOfDays;
    this->payRate = w.payRate;
  }

  void totalSalary()
  {
    float total = this->noOfDays * this->payRate;

    cout << "TotalSalary of " << this->name << " : " << total << "/-" << endl << endl;
  }

  void display()
  {
    cout << "Name: " << this->name << endl;
    cout << "Pay Rate: " << this->payRate << endl;
    cout << "No Of Days worked: " << this->noOfDays << endl << endl;
  }
};

int main()
{
  Worker w1;
  Worker w2("Raj",19,987.5);
  Worker w3("Ram",13,455);
  Worker w4(w3);

  w1.display();
  w1.totalSalary();

  w2.display();
  w2.totalSalary();

  w4.display();
  w4.totalSalary();

  return 0;
}