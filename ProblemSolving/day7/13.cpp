#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    string str[n];
    for(int i = 0; i < n; i++){
        cin>> str[i];
    }
    sort(str, str + n);
    
    return 0;
}