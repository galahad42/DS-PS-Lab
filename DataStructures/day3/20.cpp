// Program for finding matrix determinant
#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int arr0[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr0[i][j];
        }
    }

    


    return 0;

}