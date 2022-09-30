//  Tower of Hanoi
#include<iostream>
using namespace std;

int toh(int n, char a, char b, char c){

    if( n == 1){
        cout << "move disk "<< n << " from " << a << " to " << c << endl;
    }

    else{
        toh(n-1, a, c, b);
        cout << "move disk " << n << " from " << a << " to " << c << endl;
        toh(n-1, b, c, a);
    }
    
}

int main()
{
    char a = 'A';
    char b = 'B';
    char c = 'C';
    int n;
    cin >> n;

    toh(n, a, b, c);
    
    return 0;
}