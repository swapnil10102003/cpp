/*
 Write a program to design a class complex to represent complex number. The complex class should use an external function (use it as a friend function) to add two complex number. The function should return an object of type complex representing the sum of two complex numbers.
*/

#include <iostream>
using namespace std;

class Complex
{

    double real;
    double imaginary;

public:
    Complex(double r, double i)
    {
        real = r;
        imaginary = i;
    }

    // Friend function to add two complex numbers
    friend void addComplex(Complex c1, Complex c2);

    void display()
    {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

// Friend function definition to add two complex numbers
void addComplex(Complex c1, Complex c2)
{
    double realSum = c1.real + c2.real;
    double imaginarySum = c1.imaginary + c2.imaginary;

    cout << "\nSum of Complex Numbers:" << endl;
    cout << "Complex Number: " << realSum << " + " << imaginarySum << "i" << endl;
}

int main()
{

    Complex complex1(2.5, 3.0);
    Complex complex2(1.5, 2.5);

    // Displaying the original complex numbers
    cout << "Original Complex Numbers:" << endl;
    complex1.display();
    complex2.display();

    // Adding two complex numbers using the friend function
    addComplex(complex1, complex2);

    return 0;
}
