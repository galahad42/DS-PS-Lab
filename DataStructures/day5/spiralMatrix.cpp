#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int spiralMatrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> spiralMatrix[i][j];
        }
    }

    int ptr1 = 0;
    int ptr2 = m-1;
    int ptr3 =  n-1;
    int ptr4 = 0;


    return 0;
}