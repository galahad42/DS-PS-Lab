// Program for merging two sorted arrays
#include<iostream>
using namespace std;

int mergeArray(int a[], int m, int b[], int n){
    int c[m+n];
    int i = 0;
    int j = 0;
    int k = 0;

    while ( i < m and j < n) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
            k++;
        }

        else if (b[i] < a[j])
        {
            c[k] = b[i];
            i++;
            k++;
        }
    }

    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main()
{
    int A[] = {1, 2, 4, 5, 6, 7};
    int B[] = {3, 5, 6, 7};
    return 0;
}