/*
 Write a C++ program using class to calculate simple interest amount. (Use parameterized constructor with default value for rate)

*/
#include<iostream>
using namespace std;

class Interest
{
   float ammount;
   float time;
   float rate;

   public:
    Interest(float am, float ti = 10, float ra = 8)
    {
      ammount = am;
      time = ti;
      rate = ra;
    }

    void simpleInterest()
    {
      float total_interest = (this->ammount * this->time * this->rate) / 100;

      cout << "Interest: " << total_interest << endl;
    }
};

int main()
{ float p_amount, time, rate ;
  cout << "Enter the principle amount, time and rate" << endl;
  cin >> p_amount >> time >> rate;
  Interest in(p_amount, time, rate );
  Interest in1(p_amount);

  in.simpleInterest();
  in1.simpleInterest();

  return 0;
}