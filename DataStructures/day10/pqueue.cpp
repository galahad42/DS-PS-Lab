#include <stdio.h>
#define N 6
int a[N] = {2, 4, 5, 6};
void insertarray(int a[], int n, int i, int key)
{
    for (int j = n - 1; j >= i; j--)
        a[j + 1] = a[j];

    a[i] = key;
    n++;
}

int deletearray(int a[], int i, int n)
{
    int x = a[i];
    for (int j = i + 1; j <= n; j++)
    {
        a[j - 1] = a[j];
    }
    n--;

    return x;
}
void insertpq(int a[], int n, int prn)
{
    int i = 0;
    while (prn >= a[i])
    {
        i++;
    }
    insertarray(a, N, i, prn);
}
int removepq(int a[])
{
    int x = deletearray(a, 0, N);
    return x;
}

int main()
{

    insertpq(a, N, 1);
    insertpq(a, N, 3);
    // removepq(a, 5);
    removepq(a);
    removepq(a);
    insertpq(a,N,5);

    for (int i = 0; i < N; i++)
    {
        printf("%d", a[i]);
    }
}