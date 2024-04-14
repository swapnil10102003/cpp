/*
 Create two base classes Learn_Info(Roll_No, Stud_Name, Class, Percentage) and Earn_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info from above two classes. Write necessary member functions to accept and display Student information. Calculate total money earned by the student. (Use constructor in derived class)
*/

#include<iostream>
#include<iomanip>
using namespace std;

class LearnInfo
{
  protected:
   int r_no;
   string s_name;
   string s_class;
   double per;

  public:
   LearnInfo(int r_no, string s_name, string s_class, double per) : r_no(r_no), s_name(s_name), s_class(s_class), per(per) {}

   ~LearnInfo() {}
};

class EarnInfo
{
  protected:
    int no_of_hours;
    double charge_per_hour;

  public:
  EarnInfo(int no_of_hours, double charge_per_hour) : no_of_hours(no_of_hours), charge_per_hour(charge_per_hour) {}

  ~EarnInfo() {}
};

class Earn_Learn_info : public LearnInfo, public EarnInfo
{
  public:
  Earn_Learn_info(int r_no, string s_name, string s_class, double per,int no_of_hours, double charge_per_hour) :
  LearnInfo(r_no, s_name, s_class, per) , EarnInfo(no_of_hours, charge_per_hour) {}

  ~Earn_Learn_info() {}

  void displayDetails()
  {
    cout << left;
    cout << setw(15) << "Roll number: " << r_no << endl;
    cout << setw(15) << "Student name: " << s_name << endl;
    cout << setw(15) << "Class: " << s_class << endl;
    cout << setw(15) << "Percentage: " << per << endl;
    cout << setw(23) << " No of hours worked: " << no_of_hours << endl;
    cout << setw(23) << "Charge for one hour: " << charge_per_hour << endl << endl;
  }

  void totalEarning()
  {
    double total = no_of_hours * charge_per_hour;
    cout << setw(15) << "Total earning: " << total << "/-" << endl << endl;
  }
};

int main()
{ 
  Earn_Learn_info info(10,"swapnil","sybca",92.62,240,100);

  int ch;

  do
  {

   cout << "1.Display Details" << endl;
   cout << "2.Display total earnings" << endl;
   cout << "3.close" << endl << endl;
   cout << "Enter the choice :" << endl;
   cin >> ch;

   switch (ch)
   {
    case 1: cout << "Details of the student: " << endl; 
            info.displayDetails();
            break;
    case 2: info.totalEarning();
            break;  
   }
  }while(ch != 3);
  
  

  return 0;
}