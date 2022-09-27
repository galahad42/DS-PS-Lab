// Program for Matrix Addition
#include<iostream>
using namespace std;



int main()
{
    int row, column;
    cin >> row >> column;
    int arr0[row][column], arr1[row][column];
    
    for(int i = 0; i< row; i++){
        for(int j = 0; j < column; j++){
            cin >> arr0[i][j];
        }

    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr1[i][j];
        }

    }

    //  addition
    int sumArr[row][column];
    for(int i = 0; i< row; i++){
        for(int j= 0; j< column; j++){
            sumArr[i][j] = arr0[i][j] + arr1[i][j];
            cout << sumArr[i][j] << " ";
        }
        cout << endl;

    }

    return 0;
}