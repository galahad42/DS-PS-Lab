#include<bits/stdc++.h>
using namespace std;

int mergeArray(int a[], int m, int b[], int n)
{
    int c[m + n];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m and j < n)
    {
        if (a[i] < b[j])
        {
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

int intersection(int a[], int m, int b[], int n)
{
    vector<int> inter;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m and j < n)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            inter.push_back(a[i]);
            i++;
            j++;
            k++;
        }
    }
}

int differnce(int a[], int m, int b[], int n)
{
    vector<int> diff;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m and j < n)
    {
        if (a[i] < b[j])
        {
            diff.push_back(a[i]);
            i++;
        }

        else if (b[j] < a[i])
        {
            j++;
        }

        else
        {
            i++;
            j++;
        }
    }

    while (i < m)
    {
        diff.push_back(a[i]);
        i++;
    }
}

int symetricDiff(int a[], int m, int b[], int n)
{
    vector<int> diff;
    int i = 0;
    int j = 0;

    if (a[i] < b[j])
    {
        diff.push_back(a[i]);
        i++;
    }

    else if (b[j] < a[i])
    {
        diff.push_back(b[j]);
        j++;
    }
}



int main()
{
    
    return 0;
}