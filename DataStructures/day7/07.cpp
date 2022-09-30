#include <iostream>
using namespace std;

void reverse(string &str, int x, string &revStr)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        revStr += str[x-1];
        reverse(str, x-1, revStr);
    }
}

int main()
{
    string str;
    cin >> str;
    string revStr = "";
    reverse(str, str.length(), revStr);
    if (str == revStr){
        cout << "Palindrome";
    }

    else {
        cout << "Not a Palindrome";
    }

    return 0;
}