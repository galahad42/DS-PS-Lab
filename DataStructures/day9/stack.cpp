#include <bits/stdc++.h>
using namespace std;
#define ll long long

int print(int stack[], int top){
    cout << "Stack: { ";
    for(int i= 1; i <=top; i++){
        cout << stack[i] << ", ";
    }
    cout << "}" << endl;

    return 0;
}

int push(int stack[], int size, int top){
    if(top == size){
        cout << "overflow" << endl;
        print(stack, size-1);
        return top;
    }

    top = top+1;
    int item;
    cout << "Enter the item to be pushed to the stack: ";
    cin >> item;
    stack[top] = item;
    print(stack, top);

    return top;
}

int pop(int stack[], int size, int top){
    if(top == 0){
        cout << "underflow" << endl;
        return top;
    }

    

    top = top-1;
    print(stack, top);
    return top;

}


int main()
{
    int size;
    cin>> size;
    static int stack[100] = {};
    int top = -1;
    int num = 0;
    int operation = -1;
    while(operation){
        cout << "select one operation: 0.EXIT   1.PUSH   2.POP:  3:PRINT  ";
    cin >> operation;

    if(operation == 1){
        cout << "how many times do you want to perform PUSH operation? ";
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            top = push(stack, size, i);
        }
    }

    if(operation == 2){
        top = pop(stack,size,top);
    }

    if(operation == 3){
        print(stack, top);
    }     
    }
    
    
    

    
    return 0;
}