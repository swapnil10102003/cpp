/*
 Write a C++ program to create a class employee having Emp_no, Name, Basic, DA. HRA. Allowances Write necessary member functions to accept and display details of Employee and generate a Pay stip using appropriate manipulators for formatted display.
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee
{ 
  int e_id;
  string e_name;
  float basic;
  float da;
  float hra;
  float allowance;

  public:
  
   void setDetails(int id,string name,float basic,float da,float hra,float allowance)
   {
	this->e_id = id;
	this->e_name = name;
	this->basic = basic;
	this->da = da;
	this->hra = hra;
        this->allowance = allowance;
   }
 
   void displayDetails()
   {    cout <<"----------------------------------------------"<<endl;
        cout << left;
	cout << setw(25)<< "Employee id :"<< this->e_id <<endl;
	cout << setw(25)<< "Employee Name :"<<  this->e_name <<endl;
	cout << setw(25)<< "Basic salary :"<<   this->basic <<"/-"<<endl;
	cout << setw(25)<< "Dearness allowance :"<<  this->da <<"/-"<<endl;
	cout << setw(25)<< "House Rent allowance :"<< this->hra <<"/-"<<endl;
	cout << setw(25)<< "Other allowance :"<<  this->allowance <<"/-"<<endl;
        cout <<"-----------------------------------------------"<<endl;
   } 

   void generatePaySlip()
   {  int i=1;
cout <<"_________________________________________________________"<<endl<<endl;
cout << right << setw(30) << "Pay Slip" << endl;
cout << left;
cout << setw(15)<< "Employee id :" << this->e_id <<endl;
cout << setw(15)<< "Employee Name :"<<  this->e_name <<endl;

cout <<"_________________________________________________________"<<endl<<endl;
cout <<  setw(10)  <<"serial No" << setw(25) << "| components" << setw(14) << "| Amount" << endl<<endl;
cout <<"_________________________________________________________"<<endl;
cout <<  setw(10)  <<  i << setw(25)  << "| Basic salary" << "|"<< this->basic <<"/-"<< endl;
cout <<  setw(10)  <<++i << setw(25)  << "| Dearness allowance" << "|"<< this->da <<"/-"<< endl;
cout <<  setw(10)  <<++i << setw(25)  << "| House rent allowance" << "|"<< this->hra <<"/-"<< endl;
cout <<  setw(10)  <<++i << setw(25)  << "| Other allowance" << "|"<<  this->allowance <<"/-"<< endl;
cout <<"_________________________________________________________"<<endl;
cout << endl << setw(20) << fixed<< "total salary : " << (this->basic)+(this->da)+(this->hra)+(this->allowance)<<"/-" << endl;
cout <<"_________________________________________________________"<<endl;


   }
};

int main()
{
  int n;
  int id;
  string name;
  float basic,da,hra,allowance;

  cout << "How many employee ?" << endl;
	cin >> n;

	Employee emp[n];


	for(int i=0;i<n;i++)
	{
	   cout<<"Enter the id, name, basic salary, dearness allowance, house rent allowance and other allowance details of an employee: "<<endl;
 	   cin>>id>>name>>basic>>da>>hra>>allowance;

	   emp[i].setDetails(id,name,basic,da,hra,allowance);
		
	}

        for(int i=0;i<n;i++)
        {  
          cout<<"details of "<< i+1 <<" employee :"<<endl;
          emp[i].displayDetails();
        }

        for(int i=0;i<n;i++)
        {  
          
          emp[i].generatePaySlip();
        }

return 0;

}
