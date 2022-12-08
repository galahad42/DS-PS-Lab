#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct pQueue{
    int value;
    int priority;
} pq[10];

int n = -1;

void insert(int value, int priority){
    n++;
    pq[n].value = value;
    pq[n].priority = priority;
}

void deletion(int value){}



int main()
{
    
    return 0;
}