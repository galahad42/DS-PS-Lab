#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int element){
    for(int i = 0; i< n; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int element){
    bool isTrue = true;
    int max = n-1;
    int min = 0;
    while(isTrue){
        if(max < min ){
            return -1;
            isTrue = false;
        }

        else if(element >  arr[(max+min)/2]){
            min = (max+min)/2 + 1;
        }

        else if(element < arr[(max+min)/2]){
            max = (max+min)/2;
        }

        else if( element== arr[(max+min)/2]){
            return (max+min)/2;
            isTrue = false;
        }

    }
}

int selectionSort(int arr[], int n){

}


int insertionSort(int arr[], int n)
{
    int temp;
    int min = arr[0];
    int minIndx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndx];
        arr[minIndx] = temp;
    }
}


int bubbleSort(int arr[], int n){
    int temp = 0;
    int flag = 1;
    int pass = 0;

    for(int i = 0; i< n-1 && flag == 1; i++){
        flag=0;
        for(int j = 0; j <n-i-1; j++){
            if(arr[j]>arr[j+1]){
                pass++;
                flag = 1;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << pass << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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

    bubbleSort(arr, n);
   


    insertionSort(arr, n);

    int element;
    cin >> element;
    int index;

    // linear search
    // index = linearSearch(arr, n, element);

    // binary search
    index = binarySearch(arr, n, element);

    if(index == -1){
        cout << "Element " << element << " not found." << endl;
    }

    else{
        cout << "Element " << element << " found at index: " << index << endl;
    }
    

    
    
    return 0;
}