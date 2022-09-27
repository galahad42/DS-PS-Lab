// Program for Matrix Transpose(without second matrix)
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

    for(int i = 0; i < row; i++){
        for(int j = i; j<column; j++){
            int temp = arr0[i][j];
            arr0[i][j] = arr0[j][i];
            arr0[j][i] = temp;

        }
    }

    //traverse
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++ ){
            cout << arr0[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
