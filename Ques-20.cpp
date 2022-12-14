/*
QUESTION-20:
            Write a program to implement Upper Triangular Matrix using one-dimensional array.
SOLUTION:
*/
#include<iostream> 
using namespace std;

// Function to form upper triangular matrix
void upper(int matrix[3][3], int row, int col)
{
    int i, j;
     
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                cout << "0" << " ";
            }
            else
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 20~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int row = 3, col = 3;
     

    cout << "Upper triangular matrix: \n";
    upper(matrix, row, col);
         
    return 0;
}