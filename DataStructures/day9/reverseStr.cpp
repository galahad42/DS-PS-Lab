// C++ program to reverse a string using stack
#include <bits/stdc++.h>
using namespace std;


struct Stack
{
    int top;
    unsigned capacity;
    char *array;
};
  

Stack *createStack(unsigned capacity)
{
    Stack *stack = new Stack();
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = new char[(stack->capacity * sizeof(char))];
    return stack;
}


int isFull(Stack *stack)
{
    return stack->top == stack->capacity - 1;
}


int isEmpty(Stack *stack) { return stack->top == -1; }


void push(Stack *stack, char item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

char pop(Stack *stack)
{
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

void reverse(char str[])
{

    int n = strlen(str);
    Stack *stack = createStack(n);

    int i;
    for (i = 0; i < n; i++)
        push(stack, str[i]);

    
    for (i = 0; i < n; i++)
        str[i] = pop(stack);
}

void isPalindrome(char str[]){
    char str1[100];
    for(int i = 0; i < strlen(str); i++){
        str[i] = str1[i];
    }
    reverse(str);
    int flag = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != str1[i]){
            break;
        }
    }
}

int main()
{
    char str[100];
    cin >> str;

    // reverse(str);
    isPalindrome(str);
    cout << "Reversed string is " << str;

    return 0;
}


