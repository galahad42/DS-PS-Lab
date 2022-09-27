// https://www.hackerearth.com/problem/algorithm/pattern/
#include<iostream>
        using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<= n; i++){
        if(i == 1 || i == n) {
            for(int j = 1; j <=n; j++){
                cout << "* ";
            }
        }
        else{
            for(int k = n; k>i; k--){
                cout << "  ";
            }
            cout << "* ";

            for(int l = 1; l < i; l++){
                cout << "  ";
            }


        }
        cout << endl;
    }

    return 0;
}