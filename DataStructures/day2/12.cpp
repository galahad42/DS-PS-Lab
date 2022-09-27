// Program for Set Symmetric Difference
#include<bits/stdc++.h>
using namespace std;

int symetricDiff(int a[], int m, int b[], int n){
    vector<int> diff;
    int i = 0;
    int j = 0;

    if ( a[i] < b[j] ) {
        diff.push_back(a[i]);
        i++;
    }

    else if ( b[j] < a[i] ){
        diff.push_back(b[j]);
        j++;
    }
}

    int main()
{
    
    return 0;
}