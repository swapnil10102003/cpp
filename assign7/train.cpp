/*
 Create a Base class Train containing protected data membersas Train_no, Train_Name. Derive a class Route(Route id, Sorce, Destination) from Train class. Also derive a class Reservation(Number of Seats, Train Class, Fare, Travel Date) from Route. Write a to perform following necessary functions:

  a. Enter details of,,n" reservations
  b. Display details of all reservations
  c. Display reservation details of a specified Train class
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Train
{
  protected:
   int t_no;
   string t_name;
};

class Route : public Train
{
  protected:
   int r_id;
   string source;
   string destination;
};

class Reservation : public Route
{
  private:
   int no_of_seats;
   string classs;
   double fare;
   string t_date;

  public:

  void acceptDetails()
  {
    cout << "Enter the train no, name, route id, source,destination, no of seats reserved, class, fare and travel date" << endl;
    cin >> t_no >> t_name >> r_id>> source >> destination >> no_of_seats >> classs >> fare >> t_date;
  }

  void displayDetails()
  { 
    cout << left;
    cout << setw(15)<< "Train no: " << t_no << endl;
    cout << setw(15) << "Name: " << t_name << endl; 
    cout << setw(15) << "Route id: " << r_id << endl;  
    cout << setw(15) << "Source: " << source << endl;
    cout << setw(15) << "Destination: " << destination << endl;
    cout << setw(15) << "No of seats reserved: " << no_of_seats << endl; 
    cout << setw(15) << "Train Fare: " << fare << "/-" <<  endl; 
    cout << setw(15) << "Total Fare: " << fare*no_of_seats << "/-" << endl;
    cout << setw(15) << "Travel date: "  << t_date << endl << endl; 
  }


  void displayClass(Reservation r[], int n,string s_class)
  {
    for(int i = 0; i <n; i++)
    {
      if(r[i].classs == s_class)
      {
        cout << "Details for " << s_class << endl;
        r[i].displayDetails();
      }
    }
  }

};

int main()
{
  int n;
  cout << "how many reservations" << endl;
  cin >> n;

  Reservation res[n];
  Reservation r;

  // accepting values 
  for (int i = 0; i < n; i++)
  {
    res[i].acceptDetails();
    cout << endl;
  }

  // displaying details
  for (int i = 0; i < n; i++)
  {
    res[i].displayDetails();
    cout << endl;
  }
  
  // searching for specific train class.
  string s_class;
  cout << "Enter the train class:" << endl;
  cin >> s_class;
  r.displayClass(res,n,s_class);
  return 0;
}