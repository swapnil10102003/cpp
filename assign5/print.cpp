/*
Write a C++ program to implement a class printdata" to overload print" function as follows: 
void print(int) - outputs value <int>, that is, value followed by the value of the integer, eg. print(10) outputs value <10>

void print(char ) - outputs value -"char", that is, value followed by the string in double quotes. eg print("hi") outputs value-"hi"

void print(int n, char *)- display first n characters from the given string, eg print(3. "Object")- outputs value-"Obj"

*/

#include<iostream>
#include<string>
using namespace std;

class Printdata
{
 public:
 void print(int no)
 {
   cout <<"value- <" <<  no << ">" << endl;
 }

 void print( char ch )
 {
  cout <<"value- \"" <<  ch <<"\""  << endl;
 }

 void print( int n, char *str)
 {     
  cout <<"value- \"";
      for( int i = 0; i < n && str[i] !='\0'; i++ )
      {
        cout << str[i] ;
      }
      cout << "\"" << endl;
 }


};

int main()
{
  Printdata data;
  data.print(10);
  data.print('h');
  data.print(3,"Object");

  return 0;
}