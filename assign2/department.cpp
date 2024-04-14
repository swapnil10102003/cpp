/*
 Create a class for different departments in a college containing data members as Dept_Id. Dept_Name. Establishment year, No_of_Faculty, No_of_students. Write a C++ program with following member functions:
 a.To accept „n" Department details.
 b.To display department details of specific department.
 c.To display department details according to a specified establishment year

*/

#include<iostream>
#include<string>
using namespace std;

class Department
{ 
  int d_id;
  string d_name;
  int est_year;
  int no_of_faculty;
  int no_of_student;

  public:
  
   void setDetails(int id,string name,int year,int no_faculty,int no_stud)
   {
	this->d_id = id;
	this->d_name = name;
	this->est_year = year;
	this->no_of_faculty = no_faculty;
	this->no_of_student = no_stud;

   }
 
   void displayDetails()
   {
	cout << "Department id :"<< this->d_id <<endl;
	cout << "Department Name :"<< this->d_name <<endl;
	cout << "established year :"<< this->est_year <<endl;
	cout << "No of faculty :"<< this->no_of_faculty <<endl;
	cout << "No of student :"<< this->no_of_student <<endl;

   } 

   int search_dname(string key_name)
   {
      if(this->d_name == key_name)
      return 1;
   }

   int search_estYear( int key_year)
   {
      if(this->est_year == key_year)
      return 1;
   }

};

int main()
{
	int n,result=0,result1=0;
    string search_name;
    int search_year;

	int id;
	string name;
	int year;
	int no_faculty;
	int no_student;

	cout << "How many department ?" << endl;
	cin >> n;

	Department dept[n];

	for(int i=0;i<n;i++)
	{
	   cout<<"Enter the id, name, established year,, no of faculties and no of student in    department: "<<endl;
 	   cin>>id>>name>>year>>no_faculty>>no_student;

	   dept[i].setDetails(id,name,year,no_faculty,no_student);
		
	}

    for(int i=0;i<n;i++)
    {  
        cout<<"details of "<< i+1 <<"department :"<<endl;
        dept[i].displayDetails();
    }

cout << "enter the name of department you want to show details:" << endl;
cin >> search_name;

    for(int i=0;i<n;i++)
    {
      result = dept[i].search_dname(search_name);

      if(result == 1)
      {
         dept[i].displayDetails();
      }
    }

cout << "enter the established year of department you want to show details:" << endl;
cin >> search_year;

    for(int i=0;i<n;i++)
    {
      result1 = dept[i].search_estYear(search_year);

      if(result1 == 1)
      {
         dept[i].displayDetails();
      }
    }


return 0;
  
}
