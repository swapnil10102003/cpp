//Write a program for combining two strings also show the execution of dynamic constructor. For this declare a class string with data members as name and length.

#include<iostream>
#include<string>
using namespace std;

class String
{
 string *name;
 
 int *length;

 public:
 String(string str, string str1)
 {
  name = new string[2];
  name[0] = str;
  name[1] = str1;

  length = new int[2];
  length[0] = str.length();
  length[1] = str1.length();

 }

 void concate()
 {
  string newStr  = name[0] + " " + name[1];
  cout << "concatenate string: ";
  cout << newStr << endl;
 }
};

int main()
{
  string str,str1;
  cout << "Enter two strings:" << endl;
  cin >> str >> str1 ;

  String s(str,str1);
  
  s.concate();
  return 0;
}