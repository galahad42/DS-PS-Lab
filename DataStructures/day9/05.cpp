#include <bits/stdc++.h>
using namespace std;
#define ll long long


struct studentDb{
    int rollNo;
    string name;
    int age;
    string address;

};

void printNames(struct studentDb csea, int n){
    for(int i = 0; i < n; i+=2){
        cout << csea.name << endl;


    }

}

int main()
{
    
    int n;
    cin >> n;
    studentDb csea[n];
    for(int i = 0; i < n; i ++){
        cin >> csea[i].rollNo >> csea[i].name >> csea[i].age;
        getline(cin, csea[i].address);
    }


    
    return 0;
}