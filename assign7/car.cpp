/*
 Create three classes Car. Maruti and Maruti800.Class Maruti extends Car and Class Maruti80 0 extends Maruti. Maruti800 class is able to use the methods of both the classes (Car and Maruti).
*/
#include<iostream>
#include<iomanip>
using namespace std;

class Car
{
 public:
 string companyName;
 int modelNo;
 string modelName;
 string fule;

 Car()
 { 
  cout << "IN class Car" << endl;
 }

};

class Maruti : public Car
{
 public:
 float price;

 public:
 Maruti()
 {
  cout << "IN class Maruti" << endl;
 }
 
 void acceptDetails()
 {
  cout << "Enter the car type,model no,model name,fule type and car price" << endl;
  cin >> companyName >> modelNo >> modelName >> fule >> price;
 }
 
 
};

class Maruti800 : public Maruti
{
 public:
 Maruti800()
 {
  cout << "IN class Maruti 800" << endl;
 }
 
 void displayDetails()
 {
  cout << "Car details are:" << endl;
  cout << left;
  cout << setw(15) << "company name:" << companyName << endl;
  cout << setw(15) << "model no:" << modelNo << endl;
  cout << setw(15) << "model name:" << modelName << endl;
  cout << setw(15) << "fule type:" << fule << endl;
  cout << setw(15) << "car price:" << price << "/-" << endl;
 }
};


int main()
{
 Maruti800 car;
 car.acceptDetails();
 car.displayDetails(); 

 return 0;
}
	
