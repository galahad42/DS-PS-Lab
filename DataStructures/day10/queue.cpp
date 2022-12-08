#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct que {
    int a[10];
    int f;
    int r;
} *q;


void create(struct que *q){
    q -> r = 0;
    q -> f = 0;

}

void deletions(){

}

void insert(){

}

void print(){

}

int main()
{
    q = (struct que*)malloc(sizeof(struct que));
    create(q);
    cout << "select an operation you want to perform: 1.Insert  2.Delete  3.Print  4.Exit" << endl;
    int option;
    cin >> option;
    while(option != 4){
        if(option == 1){
            insert();
        }
        else if(option == 2){
            deletions();
        }
        else if (option == 3)
        {
            print();
        }
        
    }
    
    return 0;
}