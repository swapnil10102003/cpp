/*
   Write a C++ program to merge two files into a single file using file handling.
   Assuming that a text file named FIRST.TXT contains some text written into it, write a function named vowelwords(), that reads the file FIRST.TXT and creates a new file named SECOND.TXT, to contain only those words from the file FIRST.TXT which start with a lower case vowel(i.e..with'a','e','i','o','u').

*/

#include<iostream>
#include<fstream>
using namespace std;

int mergeFiles(const string& file1, const string& file2, const string& file3)
{
  ifstream i_file1, i_file2;
  ofstream o_file;

  char ch;

  i_file1.open(file1);
  i_file2.open(file2);

  o_file.open(file3,ios::app);

  if((i_file1.fail()) && (i_file2.fail()) && (o_file.fail()))
  {
    cout << "Error in opening file " << endl;
    exit(1);
  }

  while(!i_file1.eof())
  {
    ch  = i_file1.get();

    o_file.put(ch);
  }

  while(!i_file2.eof())
  {
    ch  = i_file2.get();

    o_file.put(ch);
  }

  i_file1.close();
  i_file2.close();
  o_file.close();

  return 0;
}

int main()
{
 string file1,file2,file3;

 cout << "Enter 1st filename to read:";
 cin >> file1;

 cout << "Enter 2nd filename to read:";
 cin >> file2;

 cout << "Enter filename to write:";
 cin >> file3;

 int result = mergeFiles(file1,file2,file3);

 if(result == 0)
 {
   cout << file1 << " and " << file2 << " merge in " << file3 << "successfully" << endl;
 }
  return 0;
}