// Program for Set Intersection
#include<bits/stdc++.h>
using namespace std;

int intersection(int a[], int m, int b[], int n){
    vector<int> inter;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m and j < n) {
        if ( a[i] < b[j] ) { i++; }
        else if ( b[j] < a[i] ) { j++; }
        else {
            inter.push_back(a[i]);
            i++;
            j++;
            k++;
        }
    }
}

int main()
{
    
    return 0;
}