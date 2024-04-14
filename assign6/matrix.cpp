/*
 Write a program for developing matrix classes which can handle integer matrices of different dimensions, Also overload the operator for addition, multiplication and comparison of matrices.
*/
#include<iostream>
using namespace std;

class Matrix
{
  private:
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
      cout << "Enter the matrix elements:" << endl;
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
      cout << "Matrix Elements:" << endl;
      for (int i = 0; i < rows; i++)
      {
        for (int j = 0; j < columns; j++)
        {
          cout <<  arr[i][j] << " ";
        }
        cout << endl;
      }
    }

    //These matrices can be added if (if and only if) the order of the matrices are equal. (m*n)
    int operator +(Matrix m)
    {
       int sum = 0;
      for (int i = 0; i < rows; i++)
      {
        for (int j = 0; j < columns; j++)
        {
          sum = sum + arr[i][j] + m.arr[i][j];
        }
      }

      return sum;
    }
    
    //The product of two matrices will be defined if the number of columns in the first matrix is equal to the number of rows in the second matrix.
    Matrix operator *(Matrix m)
    {
      
        Matrix temp(2,2);

        cout << "Multiplication of given two matrices is:\n";

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < m.columns; j++) 
            {
                temp.arr[i][j] = 0;

                for (int k = 0; k < m.rows; k++) 
                {
                    temp.arr[i][j] += arr[i][k] * m.arr[k][j];
                }

                cout << temp.arr[i][j] << "\t";
            }

            cout << "\n";
        }

        return temp;
    }

    void operator ==(Matrix m)
    {
      if (rows == m.rows && columns == m.columns)
      {
        cout << "\nThe matrices are  equal" << endl;
      }
      else
      {
        cout << "\nThe matrices are not equal" << endl;
      }
    }
};

int main()
{
  int sum = 0,r,c;
  cout << "Enter the rows and columns of the 1st matrix: " << endl;
  cin >> r >> c;

  Matrix m(r,c);
  m.acceptEle();
  m.displayEle();

  cout << "Enter the rows and columns of the 2nd matrix: " << endl;
  cin >> r >> c;

  Matrix m1(r,c);
  m1.acceptEle();
  m1.displayEle();

  sum = m +m1; // addition of the 2 matrices
  cout << "\nThe sum of matrix is: " << sum << endl << endl;

  Matrix temp = m *m1;// multiplication of the 2 matrices

  m ==m1; // comparison of the matrices

  return 0;
}