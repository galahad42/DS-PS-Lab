#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int bs(int arr[], int lo, int hi, int x)
{
    if (lo > hi)
        return -1;

    int mid = (lo + hi) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return bs(arr, mid + 1, hi, x);

    return bs(arr, lo, mid - 1, x);
}
int exponentialsearch(int a[], int n, int x)
{
    if (a[0] == x)
        return 0;
    int i = 1;
    while (a[i] <= x && i < n)
    {
        i = i * 2;    
    }
    return bs(a, i / 2, i, x);
    
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    int c = exponentialsearch(a, n, x);
    cout << c << endl;

    return 0;
}