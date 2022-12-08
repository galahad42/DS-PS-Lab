#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= n; i++)

    
    {
        count++;
        
        sum += factorial(i)/i;
    }

    return 0;
}