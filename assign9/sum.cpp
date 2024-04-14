/*
  Write a C++ program to read integers from a text file and display sum of all integers in that file.
*/

#include<iostream>
#include<fstream> 
using namespace std;

int main()
{
  ofstream out;
  ifstream in;
  int sum = 0, n;
  out.open("int.txt",  ios::binary);

  if(out.fail())
  {
    cout << "Error in opening file " << endl;
    exit(1);
  }

  cout << "how many numbers are in the file? " << endl;
  cin >> n;

  int a[n]; 
 
  cout << "Enter the numbers to write to the file: " << endl;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  out.write((char *)a, sizeof(a));

  out.close();

  in.open("int.txt");

  if(in.fail())
  {
    cout << "Error in opening file " << endl;
    exit(1);
  }

  int b[n];

  in.read((char *)b, sizeof(b));

  for (int i = 0; i < n; i++)
  {
    
     sum += b[i];
  }

  cout << "The sum is: " << sum << endl;
  return 0;
}