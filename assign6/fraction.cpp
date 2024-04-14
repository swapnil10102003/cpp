/*
  Create a class Fraction that contains two data members as numerator and denominator. Write a C program to overload followingoperators
  1.++ Unary(pre and post both)
  2.<<and>> Overload as friend functions
  3.< Returns 1 if first fraction is less than second fraction
*/

#include<iostream>
using namespace std;

class Fraction
{
 private:
 int numerator;
 int denominator;

 public:
 Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) 
 {}

 ~Fraction() {}

 void display()
 {
   cout << numerator << "/" << denominator << endl;
 }

 Fraction operator ++()
 {
   numerator = numerator + denominator;
   return *this;
 }

 Fraction operator++(int) {
        Fraction temp(*this);
        numerator += denominator;
        return temp;
    }

 bool operator < ( Fraction &obj)
 {
   if(numerator*obj.denominator < denominator*obj.numerator)
   {
    return 1;
   }
    
   return 0;
 }

 friend ostream& operator <<(ostream& ,  Fraction&);
 friend istream& operator >>(istream& , Fraction&);

};

ostream& operator<<(ostream & out ,  Fraction &f)
{
  out << f.numerator<< "/" << f.denominator << endl;
  return out;
}

istream& operator>>(istream & in, Fraction &f)
{
  cout << "Enter the numerator : " ;
  in >> f.numerator;
  cout << "\nEnter the denominator : ";
  in >> f.denominator;
  return in;
}

int main()
{
 Fraction f1(5,4);
 Fraction f2(7,4);

 f1.display();
 f2.display();

 ++f1;
 f1.display();

 f2++;
 f2.display();

 if( f1 < f2 )
 {
   cout << " f1 is less than f2" << endl;
 }
 else
 {
  cout << " f1 is greater than f2" << endl;
 }
  
  cin >> f1;
  cout << f1 << endl;

  return 0;
}


