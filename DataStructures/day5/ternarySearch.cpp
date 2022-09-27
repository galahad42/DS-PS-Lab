#include<iostream>
using namespace std;

int ternarySearch(int arr[], int n, int element, int high, int low){
    // int low = 0;
    // int high = n;

    int mid1 = low + (high - low) / 3 ;
    int mid2 = high - (high - low) / 3;

    if(element < mid1){
        high = mid1-1
        ternarySearch(arr, n, element, high, low);

    }
    else if(element < mid2){

    }
    else if(element < high){
          
    }
}

int main()
{
    
    return 0;
}