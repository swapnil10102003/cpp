/*
Create a class telephone containing name, telephone number and city as a data member and write necessary member functions for the following (use function overlonding).
a. Search the telephone number with givenname
b. Search the name with given telephone number
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Telephone
{
  string name;
  long int  tele_no;
  string city;

  public:
  void acceptDetails()
  {
    cout << "Enter customer name , telephone no and city: " << endl;
    cin >> name >> tele_no >> city ;
  }

  void displayDetails()
  {
    cout << left;
    cout << setw(10) << name << setw(10) << tele_no << setw(10) << city << endl;
  }

  void search(int s_num)
  {
    if(s_num == tele_no)
    {
      cout << "The name of customer which have given telephone no is:" << name << endl;
    }
     else
    {
      cout << "The telephone no is not found." << endl;
    }
  }

  void search(string s_name)
  {
    if(s_name == name)
    {
      cout << "The telephone no of given name is:" << tele_no << endl;
    }
    else
    {
      cout << "The customer name is not found." << endl;
    }
  }

   void search(string s_city,int x)
  {
    if(s_city == city)
    {
      cout << "The customer name who lives in "<< s_city << " is:" << name << endl;
    }
    else
    {
      cout << "The customer city is not found." << endl;
    }

    
  }

};

int main()
{
  int n,s_num;
  string s_name,s_city;
  cout << "How many Records?" << endl;
  cin >> n;

  Telephone tele[n];

  for(int i = 0; i < n; i++)
  {
    tele[i].acceptDetails();
  }

  for(int i = 0; i < n; i++)
  {
    tele[i].displayDetails();
  }

  cout << "enter the telephone no to search:" << endl;
  cin >> s_num;
  for (int i = 0; i < n; i++)
  {
    tele[i].search(s_num);
  }

  cout << "enter the customer name to search:" << endl;
  cin >> s_name;
  for (int i = 0; i < n; i++)
  {
    tele[i].search(s_name);
  }

  cout << "enter the customer city to search:" << endl;
  cin >> s_city;
  for (int i = 0; i < n; i++)
  {
    tele[i].search(s_city,0);
  }
  return 0;
}

