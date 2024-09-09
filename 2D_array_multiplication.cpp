#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void multiplyMatrices(int matrix1[][MAX_COLS], int rows1, int cols1, int matrix2[][MAX_COLS], int rows2, int cols2, int result[][MAX_COLS]) 
{
    // Check if matrix multiplication is possible
    if (cols1 != rows2)
    {
        cout << "Invalid matrix dimensions. Multiplication failed." << endl;
        return;
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][MAX_COLS], int rows, int cols) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() 
{
    int matrix1[MAX_ROWS][MAX_COLS] = {{1, 2}, {3, 4}};
    int rows1 = 2;
    int cols1 = 2;

    int matrix2[MAX_ROWS][MAX_COLS] = {{5, 6}, {7, 8}};
    int rows2 = 2;
    int cols2 = 2;

    int result[MAX_ROWS][MAX_COLS];

    cout << "Matrix 1:" << endl;
    displayMatrix(matrix1, rows1, cols1);

    cout << "Matrix 2:" << endl;
    displayMatrix(matrix2, rows2, cols2);

    multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2, result);

    cout << "Matrix Multiplication Result:" << endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}
