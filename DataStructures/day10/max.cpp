#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void sorti(stack<int> &s)
{
    stack<int> temps;
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        while (!temps.empty() && temps.top() > temp)
        {
            s.push(temps.top());
            temps.pop();
        }
        temps.push(temp);
    }
    while (!temps.empty())
    {
        cout << ' ' << temps.top();
        temps.pop();
    }
}
int main()
{

    stack<int> s;
    s.push(4);
    s.push(6);
    s.push(1);
    s.push(3);
    s.push(5);
    sorti(s);

    return 0;
}