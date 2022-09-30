#include<iostream>
using namespace std;

int expo(int n, int x){
    if(x==0){
        return 1;
    }
    else{
        return n*expo(n,x-1);
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    cout << expo(n, x);
    
    return 0;
}