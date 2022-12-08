#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
    int data;
    struct node * next;
};

struct node * HEAD = '\0';

int main()
{
    struct node *Curr;
    struct node *b;
    struct node *c;

    Curr = (struct node *)malloc(sizeof(struct node));
    HEAD = Curr;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        Curr->data = val;
        Curr->next = (struct node *)malloc(sizeof(struct node));
        Curr = Curr->next;
    }
    Curr->next = '\0';

    while()
    
    return 0;
}