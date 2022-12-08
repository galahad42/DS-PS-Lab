#include <bits/stdc++.h>
using namespace std;

int len(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
void convert(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        i++;
    }
    cout << s << endl;
}
int pal(char s[], int l)
{
    int i;
    for (i = 0; i < l; i++)
    {
        if (s[i] != s[l - i - 1])
            return 0;
    }
    return 1;
}
void rev(char s[], int l)
{
    string r = "";
    for (int i = l - 1; i >= 0; i--)
        r = r + s[i];

    cout << r << endl;
}
void concatenate(char s1[], char s2[])
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1 += s2[i];
    }
    cout << s1 << endl;
}

void compare(char s1[], char s2[]){
    int i = 0;
    int flag = 1;
    while ((s1[i] != '\0') && (s2[i] != '\0')){
        if(s1[i] != s2[i]){
            flag = 0;
            break;
        }
        i++;
    }
}

int main()
{
    char s[100];
    cin.getline(s, 100);

    int l = len(s);
    cout << "Length is: " << l << endl;

    convert(s);

    int t = pal(s, l);
    if (t)
        cout << "PALINDROME\n";
    else
        cout << "NOT PALINDROME\n";

    rev(s, l);
    return 0;
}
