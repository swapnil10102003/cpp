/*
Write a C++ program to create two classes DM and DB which stores the value of distances. DM stores distance in m and cm and DB stores distance in feet and inches. Write a program that can read valuefor the class objects and add one object of DM with the other object of DB by using friend function.
*/

#include<iostream>
#include<iomanip>
using namespace std;

class DB;
class DM
{
  float meter; // meter
  float c_meter; // centimeter

  public:
  DM(float m, float cm)
  {
    meter = m;
    c_meter = cm; 
  }
  friend void add(DM obj1, DB obj2);
};

class DB
{
  float feet; // meter
  float inches; // centimeter

  public:
  DB(float f, float in)
  {
    feet = f;
    inches = in; 
  }

  friend void add(DM obj1, DB obj2);
};

void add(DM obj1, DB obj2)
{ float cm_to_m = obj1.c_meter / 100; // convert centimeter to meter
  float m_to_f = (obj1.meter + cm_to_m ) * 3.25; // conerting meter to feets
  float in_to_f = obj2.inches / 12; // converting inches to feet.
  float total = m_to_f + in_to_f + obj2.feet ; // total distance in feet  

  cout << "Total distance in feet: " << total <<" feets" << endl;
}

int main()
{
  float m, cm, f, in;

  cout << "Enter the distance in meters and centimeter :" << endl;
  cin >> m >> cm;
  DM obj1(m,cm);

  cout << "Enter the distance in feet and inches :" << endl;
  cin >> f >> in;
  DB obj2(f,in);

  add(obj1,obj2);

  return 0;
}
