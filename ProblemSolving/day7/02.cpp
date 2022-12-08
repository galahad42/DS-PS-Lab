#include <bits/stdc++.h>
using namespace std;
#define ll long long

void palindrome(string s){
    int i = 0;
    int j = s.length()-1;
    int flag = 1;
    while (i > j){
        if(s[i] == s[j]){
            continue;
        }
        else{
            flag = 0; 
            break;
        }
    }
    if(flag == 1){
        cout << "Palindrome" << endl;

    }
    else{
        cout << "Not Palindrome" << endl;
    }

}

void concat(string s, string s1){


}

int main()
{
    string s;
    cin >> s;

    
    return 0;
}