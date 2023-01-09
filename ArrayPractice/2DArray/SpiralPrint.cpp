#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int Counter = 0, TRow = 0, LCol = 0;
    bool d = true, e = true;
    for (int i = 0; i < nRows*nCols; i++)
    {
        if(d)
        {
            if(e)
            {
                for (Counter = LCol; Counter < nCols; Counter++)
                {
                    cout << input[TRow][Counter] << " ";
                }
                TRow++;
                d = false;
            }
            else
            {
                for (Counter = nCols-1; Counter >= LCol; Counter--)
                {
                    cout << input[nRows-1][Counter] << " ";
                }
                nRows--;
                d = false;
            }   
        }
        else
        {
            if(e)
            {
                for(Counter = TRow; Counter < nRows; Counter++)
                {
                    cout << input[Counter][nCols-1] << " ";
                }
                nCols--;
                d = true;
                e = false;
            }
            else
            {
                for (Counter = nRows-1; Counter >= TRow; Counter--)
                {
                    cout << input[Counter][LCol] << " ";
                }
                LCol++;
                d = true;
                e = true;
            }
          
        }
    }
    
    //Write your code here
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}