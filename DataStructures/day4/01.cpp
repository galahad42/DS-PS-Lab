#include<iostream>
using namespace std;

void anagram(string str1, string str2){
    int dat[26] = {[0 ... 25] = 0};
    for(int i = 0; i != '\0'; i++){
        dat[str1[i]-'a'] +=1;
    }

    for (int i = 0; i != '\0'; i++)
    {
        dat[str2[i] - 'a'] -= 1;
    }

    int flag = 1;
    for(int i = 0; i< 26; i++){
        if(dat[i] == 1){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout <<"anagram" << endl;
    }
    else if(flag==0){
        cout << "not anagram" <<endl;
    }
}


int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    anagram(str1, str2);

    
    return 0;
}