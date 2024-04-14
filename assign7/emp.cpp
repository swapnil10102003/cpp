/*
Design a two base classes Employee (Name, Designation) and Project(Project_Id, title). Derive a class Emp_Proj(Duration) from Employee and Project. Write a menu driven program to

1.Build a master table. Display a master table.
2.Display Project details in the ascending order of duration.

*/


#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

class Employee
{
  public:
   string e_name;
   string e_desig;
 
  public:
   void setEmpDetails()
   {
     cout << "Enter the employee name, designation: " << endl; 
     cin >> e_name >> e_desig;
   }
};

class Project
{
  public:
   int p_id;
   string title;

  public:
   void setProjectDetails()
   {
     cout << "Enter the  project id, project title :" << endl; 
     cin  >> p_id >> title ;
   }

};

class Emp_Pro: public Project, public Employee
{
  int duration;

  public:
   void setDuration()
   {
     cout << "Enter the  duration of project: " << endl; 
     cin  >> duration;
   }

   void displayDetails()
   {
    cout << "Employee name: " << e_name << endl;
    cout << "Designation: " << e_desig << endl;
    cout << " Project id: " << p_id << endl;
    cout << "Project name: " << title << endl;
    cout << " Duration: " << duration << endl;
   }

   void masterTable(Emp_Pro e[], int n)
   { 
     cout << setw(15)<<"Employee Name " << setw(15) << "Designation" << setw(15) << "Project id" << setw(15) << "Project name" << setw(15) << "Duration" << endl;
     for (int i = 0; i < n; i++)
     {
       cout << setw(15) << e[i].e_name << setw(15) << e[i].e_desig << setw(15) << e[i].p_id << setw(15) << e[i].title << setw(15) << e[i].duration << endl;
     }
   }

   void sort_duration(Emp_Pro e[], int n)
   {
     int temp;

     for (int i = 0; i < n-1; i++)
     {
      for(int j=0; j < n-i-1; j++)
      {
        if (e[j].duration > e[j+1].duration)
        {
          temp = e[j].duration;
          e[j].duration = e[j+1].duration;
          e[j+1].duration = temp;
        }
      }
      
     }
     
   }
};

int main()
{
 int n;
 Emp_Pro e;
 Emp_Pro ep[10];

  while(1)
  {
    int ch;
    cout << "1.CREATE\n2.DISPLAY\n3.SORT\n4.EXIT" << endl;
    cout << "Enter your choice: " << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        
        cout << "Enter how many Employees: " << endl;
        cin >> n;

        

        for (int i = 0; i < n; i++)
        {
          ep[i].setEmpDetails();
          ep[i].setProjectDetails();
          ep[i].setDuration();
        }
      
       cout << "RECORDS SAVED" << endl;
      break;

      case 2:
        // for (int i = 0; i < n; i++)
        // {
        //   ep[i].displayDetails();
        // }
         
         e.masterTable(ep,n);
      break;

      case 3:
        e.sort_duration(ep,n);

        cout << "After sorting:" << endl;
        e.masterTable(ep,n);
      break;

      case 4:
        cout << "Thank you!" << endl;
        exit(0);
      break;
    
    default:
       cout << "Please Enter valid choice. " << endl;
      break;
    }
  }
 return 0;
}