/*
  Write a C++ program to count the occurrence of a word in a file using filehandling.
*/

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int  countOccurrences(const string& filename, const string& word)
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

  while(file >> str)
  {
    if(str == word)
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

    cout << "Enter the word to count: ";
    cin >> word;

    int occurrence = countOccurrences(filename, word);

    cout << "The word " << word << " occurs " << occurrence << " times in the file." << endl;

  return 0;
}