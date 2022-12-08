#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct time{
    int hrs = 0;
    int min = 0;
    int sec = 0;
};

int main()
{
    struct time t1;
    cin >> t1.hrs >> t1.min >> t1.sec;
    struct time t2;
    cin >> t2.hrs >> t2.min >> t2.sec;
    struct time sum1;
    sum1.sec = (t1.sec+t2.sec)%60;
    int minCarry = (t1.sec+t2.sec)/60;
    
    sum1.min = (t1.min+t2.min+minCarry)%60;
    int hrCarry = (t1.min+t2.min+minCarry)/60;

    sum1.hrs = (t1.hrs+t2.hrs+hrCarry);

    cout << sum1.hrs << " hrs" << sum1.min << " min" << sum1.sec << " sec" << endl;
    
    return 0;
}