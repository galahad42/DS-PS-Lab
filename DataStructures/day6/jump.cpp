#include <bits/stdc++.h>
using namespace std;
#define ll long long

int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;

    for(int i = 0; i < n; i += step){
        if(arr[i] > x){
            prev = i-step;
            break;
            
        }

    }

    for(int i = prev; i< prev+step; i++){

        if(arr[i] == x){
            cout << x << " is present at position " << i+1;
            return 0;
        }

    }
    
    cout << x << " was not found in the array";
    return 0;

}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;

    jumpSearch(arr, x, n);
    
    return 0;
}