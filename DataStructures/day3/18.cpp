// Program for Matrix Addition
#include <iostream>
using namespace std;

int main()
{
    int row, column;
    int row1, col1;
    cin >> row >> column;
    cin >> row1 >> col1;
    int arr0[row][column], arr1[row1][col1];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr0[i][j];
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    //  multipliction
    int multArr[row][col1];
    for(int a = 0; a < row; a++){
        for(int b = 0; b < col1; b++){
            int multiple = 0;

            for(int i = 0; i < col1; i++){

                {
                    multiple += arr0[a][i] * arr1[i][b];
                }
            }
            
            multArr[a][b] = multiple;
            cout << multArr[a][b] << " ";

        }
        cout << endl;
    

    }

    return 0;
}