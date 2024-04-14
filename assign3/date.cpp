/*
 Write a C++ program to create a class Date which contains three data members as dd, mm, and yyyy Create and initialize the object by using parameterized constructor and display date in dd-mon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month.
*/
#include<iostream>
using namespace std;

class Date
{
  int day, month, year;

  public:
  Date(int day, int month, int year)
  {
    this->day = day;
    this->month = month;
    this->year = year;
  }

  void display();
};

void Date::display()
{  if(this->month >= 12 || this->day >=31)
   {
     cout << "Invalid Date" << endl;
     return; 
   }
   else
   {
      switch (this->month)
      {
        case 1:cout << this->day << "-Jan-" << this->year << endl; break;
        case 2:cout << this->day << "-Feb-" << this->year << endl; break;
        case 3:cout << this->day << "-Mar-" << this->year << endl; break;
        case 4:cout << this->day << "-Apr-" << this->year << endl; break;
        case 5:cout << this->day << "-May-" << this->year << endl; break;
        case 6:cout << this->day << "-Jun-" << this->year << endl; break;
        case 7:cout << this->day << "-Jul-" << this->year << endl; break;
        case 8:cout << this->day << "-Aug-" << this->year << endl; break;
        case 9:cout << this->day << "-Sep-" << this->year << endl; break;
        case 10:cout << this->day << "-Oct-" << this->year << endl; break;
        case 11:cout << this->day << "-Nov-" << this->year << endl; break;
        case 12:cout << this->day << "-Dec-" << this->year << endl; break;
      }
   }
}

int main()
{
  Date d(10,10,2003);

  d.display();

  return 0;
}