/*
 Create a base class Student (Roll No, Name) which derives two classes Theory and Practical. Theory class contains marks of five Subjects and Practical class contains marks of two practical subjects. Class Result (Total Marks, Class) inherits both Theory and Practical classes. (Use concept of Virtual BaseClass) Write a C++ menu driven program to perform the following functions: 
 1.Build a master table
 2.Display a master table
 3.Calculate Total marks and class obtained
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Student
{
  protected:
   int r_no;
   string sname;
  
  public:
   virtual void acceptDetails() = 0;
  
  
  
};

class Theory : public  virtual  Student
{
  protected:
   float m1, m2, m3, m4, m5;

  public:

   void acceptDetails()
  {
    cout << "enter student roll no and name:" << endl;
    cin >> r_no >> sname;
    cout << "Enter marks of five Subjects obtained by student:" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

  }

  float getTmarks()
  {
    return m1 + m2 + m3 + m4 + m5;
  }
   
};

class Practical : public  virtual Student
{
  protected:
   float p1,p2;

  public:

   void acceptDetails()
  {
  cout << "Enter the marks obtained in practicals:" << endl;
  cin >> p1 >> p2;
 
  }

  float getPmarks()
  {
    return p1 + p2;
  }
   
};

class Result :  public  Theory, public  Practical
{
  private:
    float total_marks;
    string classs;

  public:
   
     void acceptDetails()
   {
     Theory::acceptDetails();
     Practical::acceptDetails();
   }

   void displayDetails()
   { cout << left;
     cout << setw(15) << "Roll NO : " << r_no << endl;
     cout << setw(15) << "NAme :" << sname << endl;
     cout << setw(15) << "Theory marks :" << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
     cout << setw(15) << "Practical marks :" << p1 << " " << p2 << endl;
   }

  void totalMarks()
   {
     total_marks = getTmarks()  + getPmarks();

     cout << "Total marks: " <<   total_marks << endl;
   }

   void calculateClass()
    {   string classs;
        float per = (total_marks / 600) * 100;
    
        if (per >= 90)
            classs = "Distinction";
        else if (per >= 75)
            classs = "First Class";
        else if (per >= 60)
            classs = "Second Class";
        else if (per >= 40)
            classs = "Pass Class";
        else
            classs = "Fail";

        cout << "Class: " << classs << endl;
    }
};

int main()
{
  Result res;
  int ch;

  while(1)
  {
    cout << "\n1.Create \n2.Display \n3.Total marks \n4.Class obtain \n5.exit" << endl;
    cout << "Enter choice: " ;
    cin >> ch;

    switch(ch)
    {
      case 1: res.acceptDetails(); 
              break;
      
      case 2: res.displayDetails(); 
              break;

      case 3: res.totalMarks(); 
              break;
      
      case 4: res.calculateClass(); 
              break;
      case 5: exit(0); break;

      default: cout << "Enter valid choice....." << endl;
    }

  }    

  return 0;
}