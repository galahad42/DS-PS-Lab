#include <bits/stdc++.h>
using namespace std;
#define ll long long

int digit(int x){
    int dig = log10(x)+1;
    return dig;
}

int sum1(int x){
    int sum = 0;
    while(x>0){
        sum += x%10;
        x= x/10;
    }
    return sum;
}

int main()
{
    int x;
    cin >> x;
    int dig = digit(x);
    while(dig != 1){

        x = sum1(x);
        dig = digit(x);

    }
    cout << x << endl;
    
    return 0;
}