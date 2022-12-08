#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    getline(cin,s);
    string r = "";
    for(int i = 0; i < s.size(); i++){
        if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')){
            r += s[i];
        }
    }
    cout << r << endl;
    return 0;
}