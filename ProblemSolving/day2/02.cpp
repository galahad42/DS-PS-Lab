// MADE BY amrit anand
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++){

        for(int l =n;l>=i;l--)
        cout<<"  ";
        for(int j=i; j>1; j--){
            cout << j << " ";

        }

        for(int k = 1; k<=i;k++){
            cout << k << " ";

        }

        cout << endl;

    }
    return 0;
}