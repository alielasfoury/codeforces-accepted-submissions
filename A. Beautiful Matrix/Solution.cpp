#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5], O_row, O_column, moves=0;

    for(int row = 0; row < 5; row++)
    {
        for(int column = 0; column < 5; column++)
        {
            cin >> matrix[row][column];
            if( matrix[row][column] == 1)
            {
                O_row = row;
                O_column = column;
            }
        }
    }

    while( O_row != 2)
    {
        if(O_row < 2) O_row++;
        if(O_row > 2) O_row--;
        moves++;
    }

    while( O_column != 2)
    {
        if(O_column < 2) O_column++;
        if(O_column > 2) O_column--;
        moves++;
    }

    cout << moves << endl;


    return 0;
}