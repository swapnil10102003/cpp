/*
 Write a C++ program using function to count and display the number of lines not startingwith alphabet "A" in a text file.
*/

/*
  Write a C++ program to count the occurrence of a word in a file using filehandling.
*/

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int  countLines(const string& filename)
{
  ifstream file;
  string str;
  int count = 0;

  file.open(filename);

  if(file.fail())
  {
    cout << "Cannot open " << filename << endl;
    exit(1);
  }

  while(getline(file, str))
  {
    if(!str.empty() && str[0] != 'A' || str[0] != 'a')
    {
      count++;
    }
  }

  file.close();

  return count;
}

int main()
{
  string filename, word;

    cout << "Enter the filename: ";
    cin >> filename;

    int lines = countLines(filename);

    cout << "Number of lines not starting with 'A': " << lines << endl;

  return 0;
}