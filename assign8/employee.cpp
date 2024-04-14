/*
Create a base class Person (P_Code, P_Name). Derive two classes Account(Ac No., Balance) and Official(Designation, Experience) from Person. Further derive another class Employee from both Account and Official classes. (Use Concept of Virtual BaseClass)

Write a C++ menu driven program to perform the following functions: 
1.Build a master table for n" employees. 
2.Display a master table of.,n" employees. 
3.Display employees whose designation is H.O.D.
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Person 
{
  protected:
   int p_code;
   string p_name;
  
  public:
   
   

   Person(int code = 0, string name= "") : p_code(code), p_name(name) {}

   ~Person() {}
};

class Account : public virtual Person
{
  protected:
   long double acc_no;
   long double balance;
  
  public:
  
  Account(){}

  Account(long double acc_no, long double balance) : acc_no(acc_no), balance(balance) {}

  ~Account() {}
  
};

class Oficial : public virtual Person
{
  protected:
   string designation;
   double experience;

  public:
   Oficial() {}

   Oficial(string designation, double experience) : designation(designation), experience(experience) {}

   ~Oficial() {} 
};

class Employee : public virtual Account, public virtual Oficial
{
  public:
  Employee() {}

  Employee(int code, string name, long double acc_no, long double  balance, string designation, double experience) :
  Person(code,name), Account(acc_no,balance), Oficial(designation,experience) {}

  ~Employee() {}

  void display(Employee e[],int n)
  {
    cout << "Employee details: " << endl;
    cout << setw(15) << "Code" << setw(15) << "Name" << setw(15) << "Designation" << setw(15) << "Experience" << setw(15) << "Account Number" << setw(15) << "Balance" << endl;

    for(int i = 0; i <n; i++)
    {
      cout << setw(15) << e[i].p_code << setw(15) << e[i].p_name << setw(15) << e[i].designation << setw(15) << e[i].experience << setw(15) << e[i].acc_no << setw(15) << e[i].balance << endl;
    }

  }

  void displayHod(Employee e[], int n)
  {
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
      if((e[i].designation == "HOD") || (e[i].designation == "hod"))
      { 
        cout << setw(15) << "Code" << setw(15) << "Name" << setw(15) << "Designation" << setw(15) << "Experience" << setw(15) << "Account Number" << setw(15) << "Balance" << endl;

        cout << setw(15) << e[i].p_code << setw(15) << e[i].p_name << setw(15) << e[i].designation << setw(15) << e[i].experience << setw(15) << e[i].acc_no << setw(15) << e[i].balance << endl;

        flag = 1;
      }
    }
    if(flag == 0)
    {
      cout << " Not found "  << endl;
    }
  }
};

int main()
{
  int n;
  
  Employee e;
  Employee emp[10];
  
  while(1)
  {
    int ch;

    cout << "1.Create\n 2.Display\n 3.Display HOD\n 4.exit\n" << endl;
    cout << "Enter your choice: " << endl;
    cin >> ch;

    switch(ch)
    {
      case 1:  { int code;
                long double acc_no,balance;
                string name,designation;
                double experiance;
                
                cout << "How many employees? " << endl;
                cin >> n;
                
                for(int i = 0; i < n; i++)
                {
                cout << "Enter Details like code, name, account no, balance , designation and experiance:" << endl;
                cin >> code >> name >> acc_no >> balance >> designation >> experiance;

                  emp[i] = Employee(code, name, acc_no,balance, designation,experiance);
                }
               }
                break;

      case 2: e.display(emp, n);
              break;

      case 3: e.displayHod(emp, n);
              break;
      
      case 4: exit(0);
              
    }
  }
 

  return 0;
}