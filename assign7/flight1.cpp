/*
 Create a Base class Flight containing protected data members as Flight_no, Flight_Name. Derive a class Route (Source, Destination) from class Flight. Also derive a class Reservation(Number_Of_Seats, Class, Fare, Travel_Date) from Route. Write a C++ program to perform following necessary functions: 

 1.Enter details of..n" reservations Display details of all reservations
 2.Display reservation details of a Business class

*/

#include<iostream>
#include<iomanip>
using namespace std;

class Flight 
{
  protected:
   int f_no;
   string f_name;

};

class Route : public Flight
{
 protected:
 string source;
 string destination;
};

class Reservation : public Route
{
 int no_of_seats;
 string classs;
 double fare;
 string t_date;

 public:

  void acceptValues()
  {
    cout << "Enter the flight no, name, source, destination and class and reseved seats , fare and travel date" << endl;
    cin >> f_no >> f_name >> source >> destination >> classs >> no_of_seats >>fare >> t_date;
  }
 
  void displayReservationDetails()
  {
      cout << setw(18)<< f_no << setw(18)<< f_name<< setw(18) << source << setw(18) << destination  << setw(18) << classs << setw(18) << no_of_seats << setw(18) << fare *no_of_seats << setw(18) << t_date << endl;
  }

  int  checkClass()
  {
    if((this->classs == "business") || (this->classs == "Business"))
    {
     return 1;
    }
    return 0;
  }
};

int main()
{ 
  int n, flag = 0;
  cout << "How many reservations? " << endl;
  cin >> n;

  Reservation res[n];
  
  
  // accepting values 
  for (int i = 0; i < n; i++)
  {
    res[i].acceptValues();
  }

  // displaying the reservation details.
  cout << setw(18)<< "Flight no" << setw(18) << "Flight name"<< setw(18) << "source" << setw(18) << "destination "<< setw(18) << "Class" << setw(18) << "NO of seats" << setw(15) <<  "Total fare " << setw(18) << "Travel date" << endl;
  for (int i = 0; i < n; i++)
  {
     res[i].displayReservationDetails();
  }
 
  cout << endl << "Business class reservation details:" << endl;
  for (int i = 0; i < n; i++)
  { 
     int result = res[i].checkClass();
     if(result == 1)
     { 
      if(flag == 0)
      {
        cout << setw(18)<< "Flight no" << setw(18) << "Flight name"<< setw(18) << "source" << setw(18) << "destination "<< setw(18) << "Class" << setw(18) << "NO of seats" << setw(15) << "Total fare " << setw(18) << "Travel date" << endl;
      }
       res[i].displayReservationDetails();
       flag =1;
     }
    //  else
    //  {
       
    //  }
   
  }
  

  return 0;
}