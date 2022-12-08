#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct Stack
{
    int top = -1;
    int arr[100];

} s;

int pop()
{
    int res = s.arr[s.top];
    s.top = (s.top) - 1;
    return res;
}
void push(int r)
{
    s.top = s.top + 1;
    s.arr[s.top] = r;
}
int result(int b, int a, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
}
void postfix(string s)
{
    char symb;
    int i = 0, x, val;
    while (s[i] != '\0')
    {
        symb = s[i];
        if (symb >= '0' && symb <= '9')
        {
           
            push(symb - '0');
        }
        else
        {
            int b = pop();
            int a = pop();
            val = result(b, a, symb);
            push(val);
        }
        i++;
    }

    cout << val;
}
int main()
{
    string s;
    cin >> s;
    postfix(s);
    // cout<<t<<endl;
    return 0;
}