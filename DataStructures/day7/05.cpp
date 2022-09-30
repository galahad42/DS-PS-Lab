#include<iostream>
using namespace std;

int reverse(int x, int revNum){
    if(x==0){
        return revNum;
    }
    else{
        revNum = 10 * revNum + x % 10;
        reverse(x/10, revNum);

    }
}

int main()
{
    int x;
    cin >> x;
    int revNum = 0;
    cout << reverse(x, revNum);
    
    return 0;
}