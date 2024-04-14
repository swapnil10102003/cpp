// finding maximum number among 3 numbers using ternary operator.

#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the 3 numbers"<<endl;
  cin>>a>>b>>c;

  int result = (a>b) ? ((a>c)? a :c) : ((b>a)? ((b>c) ? b : c) : c);
  cout<<result<<endl;
}