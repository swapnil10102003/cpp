/*
 Write a program to design a elass representing complex number and having the functionality of performing addition & multiplication of tivo complex number using operator overloading.
*/
#include<iostream>
using namespace std;

class ComplexNumber 
{ 
  private:
    double real;
    double imaginary;

  public:
    ComplexNumber() = default;
    ComplexNumber(double r, double i)
    {
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    void operator +(ComplexNumber p)
    {
      double realSum = real + p.real;
      double imaginarySum = imaginary + p.imaginary;

      cout << "\nSum of Complex Numbers:" << endl;
      cout << "Complex Number: " << realSum << " + " << imaginarySum << "i" << endl;
  
    }

    void operator *(ComplexNumber p)
    {
      double realMulti = real * p.real;
      double imaginaryMulti = imaginary * p.imaginary;

      cout << "\nMultiplication of Complex Numbers:" << endl;
      cout << "Complex Number: " << realMulti << " + " << imaginaryMulti << "i" << endl;
    }

};

int main()
{
    ComplexNumber complex1(2.5, 3.0);
    ComplexNumber complex2(1.5, 2.8);

    ComplexNumber temp;

    // Displaying the original complex numbers
    cout << "Original Complex Numbers:" << endl;
    complex1.display();
    complex2.display();
    
    // complex2 is parameter to operator +() function and +complex1 is calling that function.
    complex2 +complex1; 

    complex1 *complex2;

  return 0;
}