#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1;
    for(int i=1; i<=n; i++,a+=2){
        if(a<=n){
            for(int j = 1; j <=n; j++){
                cout << "* ";
            }

        }

        
    }
    return 0;
}