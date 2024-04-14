// Write a C++ program to calculate function to sletermine simple interest by using default arguments as follows int calculate(int p,int n=10,int r=7)- Returns SI by specifying no of years and rate of interest


#include<iostream>
using namespace std;

class Interest
{
  public:
  float calculateInterest(float ammount, float time = 10, float rate = 8)
  {
    float si = (ammount * time * rate) / 100;
    return si ;
  }
};

int main()
{
  float ammount, time, rate;
  cout << "Enter the principle ammount , time and interest rate" << endl;
  cin >> ammount >> time >> rate;

  Interest in;

  cout << "the simple interest is : " << in.calculateInterest(ammount,time,rate) << endl;
  cout << "Using dfault argument the simple interest is:" << in.calculateInterest(ammount) << endl;


  return 0;
}