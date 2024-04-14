/*
 Write a C++ program to read student information such as rollno, name and percentage of n students. Write the student information using file handling.
*/

#include<iostream>
#include<fstream>
using namespace std;

void writeDetails(const string& filename, int rno[], double per[], string  name[], int n)
{
  ofstream file;
  
  

  file.open(filename);

  if(file.fail())
  {
    cout << "ERROR: Could not open " << filename << endl;
    exit(1);
  }
 
  for(int i = 0; i <n; i++)
  {
    file << "Roll No:" << rno[i] << endl;
    file << "Name:" << name[i] << endl;
    file << "Percentage:" << per[i] << endl << endl;
  }
   file.close();
}

int main()
{
  string filename;

  int n;

  cout << "How many students? " << endl;
  cin >> n;

  int rno[n];
  double per[n];
  string name[n];


  cout << "Enter the filename to oen for reading: " ;
  cin >> filename;
  
  

  for(int i = 0; i < n;i++)
  {
    cout << "enter details of " << i+1 << " student " << endl;
    
    cout << "Enter the roll number: ";
    cin >> rno[i];
    cout << "Enter the name of the student : ";
    cin >> name[i];
    cout << "Enter the percentage of the student : ";
    cin >> per[i];
  
  }
  writeDetails(filename,rno,per,name,n);

  return 0;
}