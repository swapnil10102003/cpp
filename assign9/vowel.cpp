 /*
   Write a C++ program to merge two files into a single file using file handling.
   Assuming that a text file named FIRST.TXT contains some text written into it, write a function named vowelwords(), that reads the file FIRST.TXT and creates a new file named SECOND.TXT, to contain only those words from the file FIRST.TXT which start with a lower case vowel(i.e..with'a','e','i','o','u').
*/

#include<iostream>
#include<fstream>
using namespace std;

int vowelWords(const string& filename1, const string& filename2)
{
  ifstream file1;
  ofstream file2;

  string str,str1;
  int flag = 0;

  file1.open(filename1);
  file2.open(filename2);

  if((file1.fail()) || (file2.fail()))
  {
    cout << "Error in opening files " << endl;
    exit(1);
  }

  while(! file1.eof())
  {
    file1 >> str1;

      

    if((str1[0] == 'a') || (str1[0] == 'e') || (str1[0] == 'o') || (str1[0] == 'u') || (str[0] == 'i'))
    {
      file2 << str1;
      cout << " ";
      flag = 1;
    }

  }
    file1.close();
    file2.close();
    return flag;
}

int main()
{
 string file1,file2;

 cout << "enter the filename to open for read : ";
 cin >> file1;

 cout << "enter the filename to open for write : ";
 cin >> file2;

 int result = vowelWords(file1,file2);

 if(result == 1)
 {
  cout << "success" << endl;
 }
 else
 {
  cout << "failure" << endl;
 }

  return 0;
}

