#include<iostream>
using namespace std;

int countingSort(int a[], int n, int k){
    int c[k+1] = {0};

    for(int i = 0; i< n; i++){
        c[a[i]]++;
    }

    for(int i = 1; i <= k; i++){
        c[i] += c[i-1];
    }

    int b[n];
    for(int j = n-1; j>=0; j--){
        b[c[a[j]]-1] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }

    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }



}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (k < a[i]){
            k = a[i];
        }
    }

    countingSort(a, n, k);

    return 0;
}