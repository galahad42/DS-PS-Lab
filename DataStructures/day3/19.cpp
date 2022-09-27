// Program for Matrix Transpose
#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;
    int arr0[row][column], arr1[column][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr0[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j< column; j++){
            arr1[j][i] =arr0[i][j];
            
        }
        
    }

    for (int i = 0; i < column; ++i){
        for (int j = 0; j < row; ++j)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
