/*
 Write a C++ program to create a class which contains single dimensional integer array of given size. Define member function to display median of a given array. (Use Dynamic Constructor to allocate and Destructor to free memory of anobject)

*/
#include<iostream>
#include <algorithm>
using namespace std;

class Sum 
{
  int *a;
  int size;

  public:
  Sum(int n)
  {
    size = n;
    a = new int[size];
  }

  void acceptEle()
  {
    for (int i = 0; i < size; i++)
    {
      cin >> a[i];
    }
  }
  // sorting array for finding median of array.
  void sortArray()
  {
    sort(a, a + size); 
    
  }

  void displayArray()
  { 
    for (int i = 0; i < size; i++)
    {
      cout << a[i] << " ";
    }
  }

  void median()
  {
    int low = 0;
    int high = size - 1; 

    int mid = low + (high - low) / 2;

    if(size % 2 == 1)
    {
      cout << " \n \n Median: " << a[mid] << endl;
    }
    else if(size % 2 == 0)
    {
      float avg = ( a[mid] + a[mid + 1] ) / 2;
      cout << " \n \n  Median: " << avg << endl;
    }
    
  }
 // destructor function
  ~Sum()
  {
    delete [] a;
    cout << "object destroy successfully !\n";
  }

};

int main()
{
  int n;
  cout << " Enter the number of elements in the array" << endl;
  cin >> n;
  
 Sum s(n);

 s.acceptEle();
 cout << "\n  Array elements: " ;
 s.displayArray();

 s.sortArray();

 cout <<  "\n \n Array elements after sorting: ";
 s.displayArray();

 s.median();
 
  return 0;
}