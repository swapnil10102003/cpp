// . Write a C++ Program to store GPA of a number of students and display it where n is thenumber of students entered by the user

#include<iostream>
#include<iomanip>
using namespace std;

class Student
{
  string *s_name;
  int *r_no;
  float *gpa;

  public:
  Student()
  {
    s_name = new string;
    r_no = new int;
    gpa = new float;
  }

  ~Student()
  {
    delete s_name;
    delete r_no;
    delete gpa;
  }

  void setDetails()
  {
    cout << "Enter student name: ";
    cin >> *s_name;
    cout << "Enter student Roll Number: " ;
    cin >> *r_no;
    cout << "Enter student GPA: ";
    cin >> *gpa;

    cout << endl;
  }

  void displayDetails()
  {
    cout << left;
    cout << setw(20) << "Student Roll Number: " << *r_no << endl;
    cout << setw(20) << "Student Name: " << *s_name << endl;
    cout << setw(20) << "Student GPA: " << *gpa << endl;
  }
};

int main()
{
 int n;
 cout << "Enter the number of students: ";
 cin >> n;

 Student stud[n];

 // accepting values 
 for(int i=0; i<n; i++)
 {
   stud[i].setDetails();
 }

 // display detsils
 cout << "Student details: " << endl;
 for(int i=0; i<n; i++)
 {
  stud[i].displayDetails();
 }

  return 0;
}

