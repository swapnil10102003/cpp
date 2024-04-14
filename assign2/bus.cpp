/*
 Write a C++ program to define a class Bus with the following specifications:
 Bus No
 Bus Name 
 No of Seats
 Starting point
 Destination

Write a menu driven program by using appropriate manipulators:
a.To Accept details of n buses.
b. Display all bus details.
C. Display details of bus from specified starting and ending destination by user.
*/
#include<iostream>
#include<string>
using namespace std;

class Bus
{ 
  int b_id;
  string b_name;
  int no_of_seats;
  string start_point ;
  string dest_point;

  public:
  
   void setDetails(int id,string name,int seats,string start,string dest )
   {
	this->b_id = id;
	this->b_name = name;
	this->no_of_seats = seats;  
	this->start_point = start;
	this->dest_point = dest;

   }

   void displayDetails()
   {
         cout << "Bus NO :"<< this->b_id <<endl;
         cout << "Bus Name :"<< this->b_name <<endl;
         cout << "No of seats :"<< this->no_of_seats <<endl;
         cout << "Starting point :"<< this->start_point <<endl;
         cout << "Destination point :"<< this->dest_point <<endl;
   }
  
   int search_route( string search_start, string search_dest)
   {
	if((this->start_point == search_start) && (this->dest_point == search_dest))
	return 1;
   }

};

int main()
{
  int n,result=0;
  int b_id;
  string b_name;
  int seats;
  string start ;
  string dest;

  string search_start,search_dest;

	cout << "How many buses ?" << endl;
	cin >> n;

	Bus b[n];

	for(int i=0;i<n;i++)
	{
	   cout<<"Enter the no, name, no of seats, starting point and destination point of bus: "<<endl;
 	   cin>>b_id>>b_name>>seats>>start>>dest;

	   b[i].setDetails(b_id,b_name,seats,start,dest);
		
	}

    for(int i=0;i<n;i++)
    {  
        cout<<"details of "<< i+1 <<" bus :"<<endl;
        b[i].displayDetails();
    }

cout << "enter the starting point and destination point of bus to search:"<< endl;
cin >> search_start >> search_dest;

    for(int i=0;i<n;i++)
    {
      result = b[i].search_route(search_start,search_dest);

      if(result == 1)
      {
         b[i].displayDetails();
      }
    }

  return 0;
}
