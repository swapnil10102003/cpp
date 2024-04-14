/*
Create a class String which contains a character pointer (Use new and delete operator), Write a C++
program to overload following operators:
1. '!' - To reverse the case of each alphabet from given string
2. '[]' - To print a character present at specified index
3. '<' - To compare length of two strings
4. '== ' - To check equality of two strings
5. '+' -To concatenate twestrings

*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class String
{
  char *data;

public:
  String(int len)
  {
    data = new char[len];
  }

  String(char *str)
  {
    data = new char[strlen(str) + 1];
    strcpy(data, str);
  }

  ~String()
  {
    delete[] data;
  }

  void display()
  {
    cout << data << endl;
  }

  String operator!() 
  {
    String rev = data;
    for (int i = 0; rev.data[i]; i++)
    {
      if (isalpha(rev.data[i]))
      {
        rev.data[i] = (islower(rev.data[i]) ? toupper(rev.data[i]) : tolower(rev.data[i]));
      }
    }
    return rev;
  }

  char operator[](int index)
  {
    return  data[index] ;
  }

  bool operator<(const String &other) 
  {
    return (strlen(data) < strlen(other.data));
  }

  bool operator==(const String &other) 
  {
    return (strcmp(data, other.data) == 0);
  }

  String operator+(const String &other) 
  {
    int len = strlen(data) + strlen(other.data);
    String result(len);

    strcpy(result.data, data);
    strcat(result.data, other.data);
    return result;
  }
};

int main()
{
  String str1("Hello");
  String str2("world");

  cout << "\nThe 1st string is : ";
   str1.display();
  cout << "\nThe 2nd string is : ";
   str2.display();

  String revstr1 = !str1;
  cout << "\nAfter Reversing case  of the 1st, string is : ";
  revstr1.display();

  String revstr2 = !str2;
  cout << "\nAfter Reversing case  of the 2nd, string is : ";
  revstr2.display();

  char ch = str1[1];
  cout << "\nThe character at given index is:" << ch << endl;
  

  if (str1 < str2)
  {
    cout << "\nstr1 is shorter than str2" << endl;
  }
  else
  {
    cout << "\nstr1 is not shorter than str2" << endl;
  }

  if (str1 == str2)
  {
    cout << "str1 is equal to str2" << endl;
  }
  else
  {
    cout << "str1 is not equal to str2" << endl;
  }

  String str3 = str1 + str2;
  cout << "\nConcatenated string : " ;
   str3.display();

  return 0;
}