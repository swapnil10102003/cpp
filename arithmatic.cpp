#include<iostream>
using namespace std;
int main()
{
  int num1, num2,choice;
  do
  {
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    

    cout<<endl<<endl;

    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Division"<<endl<<"4.Multiplication"<<endl<<"5.Exit"<<endl;
    cout<<"Enter the operation to perform"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:cout<<"The sum is: "<<num1+num2<<endl<<endl;
           break;
    case 2:cout<<"The subtraction  is: "<<num1-num2<<endl<<endl;
           break;
    case 3:cout<<"The division is: "<<num1/num2<<endl<<endl;
           break;
    case 4:cout<<"The multiplication is: "<<num1*num2<<endl<<endl;
           break;
    
    default: cout<< "enter valid operation"<<endl;
      break;
    }
  } while (choice !=5);

  return 0;
  
}