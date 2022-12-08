#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct Stack
{
    int top = -1;
    int arr[100];

} s1, s2;

int pop(struct Stack si)
{
    int res = si.arr[si.top];
    si.top = (si.top) - 1;
    return res;
}
void push(struct Stack si, int r)
{
    si.top = si.top + 1;
    si.arr[si.top] = r;
}
int main()
{

    push(s1, 5);
    push(s1, 6);
    push(s1, 7);
    pop(s1);
    while(s1.to)
}