/*
 Create a base class Student(Roll_No, Name, Class) which derives two classes Internal_Marks(IntMI. IntM2, IntM3, IntM4, IntM5) and External_Marks(ExtM1 ExtM2, ExtM3, ExtM4, ExtM5). Class Result(T1, T2, T3, T4, T5) inherits both Internal_Marks and External Marks classes. (Use Virtual Base Class).
  Write a C++ menu driven program to perform the following functions: 
  1.To Accept and display studentdetails
  2.Calculate Subject wise total marks obtained. 
  3.Check whether student has passed in Internal and External Exam of each subject. 
  4.Also check whether he has passed in respective subject or not and display result accordingly.
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Student
{
  protected:
   int r_no;
   string sname;
   string clas;
  
  public:
   Student() {}

   Student(int r_no, string sname, string clas) : r_no(r_no), sname(sname), clas(clas) {}

   ~Student() {}
};

class Internal_Marks : public virtual Student
{
  protected:
   double IntM1, IntM2, IntM3, IntM4, IntM5;

  public:
   Internal_Marks() {}

   Internal_Marks(double m1, double m2, double m3, double m4, double m5) : IntM1(m1), IntM2(m2), IntM3(m3), IntM4(m4), IntM5(m5) {}
};

class External_Marks : public virtual Student
{
  protected:
   double ExtM1, ExtM2, ExtM3, ExtM4, ExtM5;
  
  public:
   External_Marks() {}

   External_Marks(double e1, double e2, double e3, double e4,double e5) : ExtM1(e1), ExtM2(e2), ExtM3(e3), ExtM4(e4), ExtM5(e5) {}

};

class Result : public  Internal_Marks, public  External_Marks
{
  protected:
   double t1, t2, t3, t4, t5;

  public:
   Result() {}

   Result(int rno, string name, string clas, double m1, double m2, double m3, double m4, double m5, double e1, double e2, double e3, double e4, double e5) : Student(rno, name, clas), Internal_Marks(m1, m2, m3, m4,m5), External_Marks(e1, e2, e3, e4,e5) {}

   void displayDetails()
   {  cout << left;
      cout << setw(10) << "Roll No:" << r_no << endl;
      cout << setw(10) << "Name:" << sname << endl;+ 
      cout << setw(10) << "Class:" << clas << endl;
   }

   void totalMarks() 
   {
        t1 = IntM1 + ExtM1;
        t2 = IntM2 + ExtM2;
        t3 = IntM3 + ExtM3;
        t4 = IntM4 + ExtM4;
        t5 = IntM5 + ExtM5;
        cout << "Total Marks for Subject 1: " << t1 << endl;
        cout << "Total Marks for Subject 2: " << t2 << endl;
        cout << "Total Marks for Subject 3: " << t3 << endl;
        cout << "Total Marks for Subject 4: " << t4 << endl;
        cout << "Total Marks for Subject 5: " << t5 << endl;
    }

    void checkResult() {
        cout << "Pass Status:" << endl;
        cout << "Subject 1: " << (t1 >= 40 ? "Passed" : "Failed") << endl;
        cout << "Subject 2: " << (t2 >= 40 ? "Passed" : "Failed") << endl;
        cout << "Subject 3: " << (t3 >= 40 ? "Passed" : "Failed") << endl;
        cout << "Subject 4: " << (t4 >= 40 ? "Passed" : "Failed") << endl;
        cout << "Subject 5: " << (t5 >= 40 ? "Passed" : "Failed") << endl;
    }

};

int main()
{
  Result res;

  while(1)
  {
    int ch;

    cout << "\n1.Accept Details\n 2.Display\n 3. Total marks\n 4.Result\n 5.Exit" << endl;
    cout << "Enter ypour choice: " << endl;
    cin >> ch;

    switch(ch)
    {
      case 1: {
                int r_no;
                string sname,clas;
                double m1,m2,m3,m4,m5;
                double e1,e2,e3,e4,e5;

                cout << "Enter Student details and Internal ans External marks of 5 subject" << endl;
                cin >> r_no >> sname >> clas >>m1 >> m2 >> m3 >> m4 >> m5 >> e1 >> e2 >> e3 >> e4 >> e5;

                res = Result(r_no,sname,clas,m1,m2,m3,m4,m5,e1,e2,e3,e4,e5);
              }
              break;

      case 2: res.displayDetails();
              break;
      
      case 3: res.totalMarks();
              break;
      
      case 4: res.checkResult();
              break;
      
      case 5: exit(0);
                
    }
  }

  return 0;
}