#include<bits/stdc++.h>
using namespace std;

//traversal
void traverse(int n, int *arr) {

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

//insertion
void insertion(int *arr, int ind, int element){
    int insert_arr[11];
    for (int i = 10; i >= ind; i++)
    {
        insert_arr[i+1] = arr[i];
    }

    insert_arr[ind] = element;

    traverse(11, insert_arr);
    
}

//deletion
void deletion(int *arr, int ind){
    int delete_arr[9];
    for (int i=0; i< ind; i++){
        delete_arr[i] = arr[i];
    }
    for(int i=ind; i < 9; i++){
        delete_arr[i] = arr[i+1];
    }

    traverse(9, delete_arr);


}

//element analysis
void element_analysis(int *arr, int n){
    // unordered_map<int, int> mp;
    // for(int i = 0; i < n; i++){
    //     mp[arr[i]] += 1;
    // }

    //if the array is sorted
    for(int i = 0; i<n; i++){
        if (arr[i]==arr[i+1]){
            cout << arr[i] << " ";
            i++;
        }
    }

}

//reversal
void reverse_arr(int *arr, int n){
    for(int i = 0; i < n/2; i++){
        int temp;
        temp= arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
        }
}

// missing number (valid for natural numbers only)
void miss_num(int *arr, int n){
    int m = INT_MIN;  //macro which returns the min value
    for(int i = 0; i < n; i++){
        m = max(m, arr[i]);
    }
    int sum;
    sum = m*(m+1)/2;

}


    int main()
{
    int arr[10];
    cout << "Enter 10 numbers in the array separated by space" << endl;
    for(int i = 0; i<10; i++){
        cin >> arr[i];
    }

    traverse(10, arr);

    cout << "Enter the index at which you want to insert the element";
    int ind; 
    int element;
    cin >> ind;
    cin >> element;
    insertion(arr, ind, element);
    return 0;
}