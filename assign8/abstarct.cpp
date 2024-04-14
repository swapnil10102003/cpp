/*
 Write a program with Student as abstract class and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using array of pointer of type base class Student.
*/
#include<iostream>
using namespace std;

class Student
{
  protected:
   int r_no;
   string sname;
  
  public:
   virtual void acceptDetails() = 0;
   virtual void displayDetails() = 0;
  
  
};

class Engineering : public Student
{
  string branch;
  public:

   void acceptDetails()
  {
    cout << "\nEnter student roll no , name and branch of engineering student" << endl;
    cin >> r_no >> sname >> branch;
  }

 void displayDetails()
  {
    cout << "\nDetails of engineering student :" << endl;
    cout << "Roll No : "<< r_no << endl;
    cout << "Name : "<< sname << endl;
    cout << "Branch No : "<< branch << endl;
  }
};

class Medicine : public Student
{
  private:
   string dept;

  public:
  void acceptDetails()
  {
    cout <<  "\nEnter student roll no, name and department of medical student : " << endl;
    cin >> r_no >> sname >> dept;
  }

  void displayDetails() 
  {
    cout << "\nDetails of medical student : " << endl;
    cout << "Roll no : " << r_no << endl;
    cout << "Name : " << sname << endl;
    cout << "Department : " << dept << endl;
  }
};

class Science : public Student
{
  private:
   string branch;

  public:
   void acceptDetails()
  {
    cout << "\nEnter student roll no , name and branch of science student " << endl;
    cin >> r_no >> sname >> branch;
  }

   void displayDetails()
  {
    cout << "\nDetails of science student:" << endl;
    cout << "Roll No : "<< r_no << endl;
    cout << "Name : "<< sname << endl;
    cout << "Branch No : "<< branch << endl;
  }
   
};

int main()
{
  int n;
  cout << "How many students?" << endl;
  cin >> n;
  Student *stud[n];
 
  // to create object of all class.
  for(int i = 0; i < n; i++)
  {
    if(i % 2 == 0)
    {
      stud[i] = new Engineering();
    }
    else if( i == 3 || i == 5 )
    {
      stud[i] = new Medicine();
    }
    else
    {
      stud[i] = new Science();
    }

    stud[i]->acceptDetails();
  }

  cout << "********************************" << endl;
  cout << "DETAILS: " << endl;

  for (int i = 0; i < n; i++)
  {
    stud[i]->displayDetails();
  }

 // to free memory
  for (int i = 0; i < n; i++)
  {
    delete stud[i];
  }

  return 0;
}