#include <iostream>
using namespace std;

int sumf(int x, int sum)
{
    if (x == 0)
    {
        return sum;
    }
    else
    {
        sum += x % 10;
        sumf(x / 10, sum);
    }
}

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    cout << sumf(x, sum);

    return 0;
}