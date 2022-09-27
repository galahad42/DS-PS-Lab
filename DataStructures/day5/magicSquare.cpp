#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int magicSquare[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> magicSquare[i][j];
        }
    }

    int sumRow[n] = {0}, sumCol[n] = {0}, sumDiag = 0;
    for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            if(i == j){
                sumDiag += magicSquare[i][j];
            }
            sumRow[i]+= magicSquare[i][j];
            sumCol[j]+= magicSquare[j][i];

        }
        
    }
    int flag = 1;
    int sum = sumRow[0];
    for(int i = 0; i<< n; i++){
        if(sumRow[i] != sum || sumCol[i] != sum || sum != sumDiag ){
            flag = 0;
            break;
        }
        
        
    }

    if(flag == 0){
        cout << "Not a magic square" << endl;
    }
    else if (flag == 1){
        cout << "Magic Square" << endl;
    }
    return 0;
}