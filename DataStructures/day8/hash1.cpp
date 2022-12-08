// program for hash table implementation without colision
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int hashmap(int arr[], int n, int max){
    int hmap[max+1][n+1] = {0};
    for(int i = 0; i  < n; i++){
        for(int j = 0; j < n+1; j++){
            if(hmap[arr[i+1]][j] = 0) {
                hmap[arr[i+1]][j] = arr[i];
                break;
            }       
        
        }    
    }

    for(int i = 0; i < max+1; i++){
        for(int j = 0;  j < n+1; j++ ){
            cout << hmap[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }

    hashmap(arr, n, max);
    

    return 0;
}