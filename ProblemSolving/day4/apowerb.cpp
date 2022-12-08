#include <bits/stdc++.h>
using namespace std;
#define ll long long

// divide and conquer
int power(int a, int b){
    if(b == 1){
        return a;
    }

    else if(b%2 == 0){
        return power(a,b/2)*power(a,b/2);
    }
    else if(b%2 == 1){
        return a*power(a,b/2)*power(a,b/2);
    }
    

}

int main()
{
    int a, b;
    cin >> a >> b;
    int pwr = power(a, b);
    cout << pwr;

    return 0;
}