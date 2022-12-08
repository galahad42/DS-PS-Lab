#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (num == 1 or num == 0)
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
    int x;
    cin >> x;
    int n;
    cin >> n;
    int sum = 0;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1, j) * pow(x, i - 1) / factorial(i);
        j++;
    }

    cout << sum;

    return 0;
}