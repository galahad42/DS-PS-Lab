#include <bits/stdc++.h>
using namespace std;
#define ll long long

int wordCount(string s){
    int count = 1;
    int flag = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ' && s[i+1] != ' '){
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    getline(cin, s);

    cout << wordCount(s);
    
    
    return 0;
}