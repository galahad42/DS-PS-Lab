#include<iostream>
using namespace std;

void repeating(int n, int arr[]){
    

    //max number
    int max = arr[0];
    for(int i = 1; i< n; i++){
        if (arr[i]>max){
            max= arr[i];
        }
    }

    int dat[max+1] = {0};
    
    for(int i = 0; i < n; i++){
        dat[arr[i]] +=1;

    }

    for(int i = 1; i < n+1; i++){
        if(dat[i]>0){
            cout << "Element " << i << ": " << dat[i] << endl;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    repeating(n, arr);
    
    return 0;
}