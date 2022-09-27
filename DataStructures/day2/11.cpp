// Program for Set Difference
#include<bits/stdc++.h>
using namespace std;

int differnce(int a[], int m, int b[], int n){
    vector<int> diff;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m and j < n)
    {
        if ( a[i] < b[j] ) {
            diff.push_back(a[i]);
            i++;
        }

        else if ( b[j] < a[i] ) {
            j++;
        }

        else {
            i++;
            j++;
        }
    }

    while (i < m) {
        diff.push_back(a[i]);
        i++;
    }
}

int main()
{
    
    return 0;
}