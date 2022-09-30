#include<iostream>
using namespace std;

// using stack
int dat[101] = {0};

int fib(int n)
{
    if (n == 1 || n == 2)
        return dat[n] = n - 1;

    else if (dat[n] == 0)
        dat[n] = fib(n - 1) + fib(n - 2);
        
    return dat[n];
}

//normal recursion
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        if(n == 2){
            return 1;
        }
        else
            return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++)
        cout << fib(i);
    
    return 0;
}