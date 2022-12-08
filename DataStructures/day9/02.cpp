#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct height{
    int feet = 0;
    int inches = 0;
};

int main()
{
    struct height h1, h2, sum1;
    cout << "enter height 1 in feet and inches both space separated" << endl;
    cin >> h1.feet >> h1.inches;
    cout << "enter height 2 in feet and inches both space separated" << endl;
    cin >> h2.feet >> h2.inches;

    sum1.inches = (h1.inches+h2.inches)%12;
    int carry = (h1.inches + h2.inches)/12;

    sum1.feet = h1.feet+h2.feet+ carry;

    cout << sum1.feet << " feet and " << sum1.inches << " inches"; 

    return 0;
}