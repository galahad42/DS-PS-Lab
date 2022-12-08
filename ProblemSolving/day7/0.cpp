// write a programm to find length of a string using user defined function
// wap to find reverse of a string using user defined function
// wap to count number of words in a paragraph

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int len(string s){
    int count = 0;
    int i = 0;
    while(s[i] != '\0'){
        count++;
        i++;
    }

    return count;

}

void rev(string s, int count){
    string rev[count+1];
    int j = 0;
    for(int i = count-1; i>=0; i--){
        rev[j] = s[i];
        
        j++;

    }
    cout << rev << endl;
}

int main()
{
    string s;
    cin >> s;
    int count = len(s);
    cout << count << endl;
    rev(s, count);
    
    return 0;
}