#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << j  << " ";
        }

        for(int k = 0; k < n-i; k++){
            cout << "   ";
            cout << " ";
        }

        for(int l = i; l > 0; l--){
            cout << l << " ";
        }

        cout << endl;
        
    }
    return 0;
}