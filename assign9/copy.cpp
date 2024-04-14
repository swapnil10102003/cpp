/*
  Write a C++ program that copies the contents of one file to another.
*/

#include<iostream>
#include<fstream>
using namespace std;

int copyContents(const string& filename1, const string& filename2)
{
  ifstream file1;
  ofstream file2;

  char ch;

  file1.open(filename1);
  file2.open(filename2);

  if((file1.fail()) || (file2.fail()))
  {
    cout << "Error to open file " << endl;
    return 1;
  }

  while(!file1.eof())
  {
    ch = file1.get();

    file2.put(ch);
  }

  file1.close();
  file2.close();

  return 0;
}

int main()
{
 string filename1, filename2;

    cout << "Enter the filename to read: ";
    cin >> filename1;
    
    cout << "Enter the filename to write: ";
    cin >> filename2;

    int result = copyContents(filename1, filename2);

    if(result == 0)
    {
      cout << "Content of file " << filename1 << " is copied to " << filename2 << endl;
    }
  return 0;
}