/*
 Write a C++ program to read a text file and count number of Upper case Alphabets, Lower Case Alphabets Digits and Spaces using File Handling.
*/

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
  ifstream file;
  char ch;
  int up_count = 0, lo_count = 0, d_count = 0, s_count = 0;

  file.open("a.txt");

  if(!file.good())
  {
    cout << "Error: Couldn't open file " << endl;
    exit(1);
  }
  else
  {
    while(!file.eof())
    {
      ch = file.get();

      // cout << ch << endl;

      if(isupper(ch))
      {
        up_count++;
      }
      else if(islower(ch))
      {
        lo_count++;
      }
      else if(isdigit(ch))
      {
        d_count++;
      }
      else if(ch == ' ')
      {
        s_count++;
      }
    }
  }
 
  cout << "Count of Uppercase characters is : " << up_count << endl;
  cout << "Count of Lowercase characters is : " << lo_count << endl;
  cout << "Count of didgit characters is : " << d_count << endl;
  cout << "Count of spaces is : " << s_count << endl;

  file.close();

  return 0;
}