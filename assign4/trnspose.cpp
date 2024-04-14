/*
 Write a C++ program to create a class which contains two dimensional integer array of size mXn. Write a member function to display transpose of entered matrix. (Use Dynamic Constructor for allocating memory and Destructor to free memory of an object)
*/
#include<iostream>
using namespace std;

class Matrix
{
 int **arr;
 int rows;
 int columns;

 public:
 Matrix(int r = 0, int c = 0)
 {
  rows = r;
  columns = c;

   arr = new int*[rows]; // crating array for each row.

   for (int i = 0; i < rows; i++)
   {
    arr[i] = new int[columns]; // creating new array for each column of each row.
   }
 }

 void acceptEle()
 {
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cin >> arr[i][j];   
    }
  }
 }

 void displayEle()
 {
  cout << "Matrix before transpose:" << endl;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout <<  arr[i][j] << " ";
    }
    cout << endl;
  }
 }

 Matrix transpose()
 {
  // creating new object of matrix class to store transposesd matrix.
  Matrix trans(columns, rows); 
  
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      trans.arr[j][i] =  arr[i][j];   
    }
  }
  return trans; // return transposed matrix.
 }
 
};

int main()
{ int rows , cols;
  cout << "Enter the rows and columns in matrix:" << endl;
  cin >> rows >> cols;

  Matrix a(rows, cols);
  // creating a object for storing result of transpose matrix.
  Matrix result;
  a.acceptEle();
  a.displayEle();

  result = a.transpose();

  // displaying a transpose matrix.
  result.displayEle();
  return 0;
}
