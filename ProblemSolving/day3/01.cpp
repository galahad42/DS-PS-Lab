#include<iostream>
using namespace std;

int factorial(int num)
{
    if(num == 1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }

}

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += factorial(i);
    }
    
    return 0;
}