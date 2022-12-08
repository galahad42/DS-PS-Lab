#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct complexNumber{
    int realNo;
    int ComplexNO;
};

int main()
{
    struct complexNumber cp1;
    cin >> cp1.realNo >> cp1.ComplexNO;
    struct complexNumber cp2;
    cin >> cp2.realNo >> cp2.ComplexNO;
    struct complexNumber sum;
    sum.realNo = cp1.realNo+cp2.realNo;
    sum.ComplexNO = cp1.ComplexNO + cp2.ComplexNO;

    cout  << sum.realNo << " + " << sum.ComplexNO << "i" << endl;
    
    struct complexNumber prod;
    prod.realNo = cp1.realNo*cp2.realNo - cp1.ComplexNO*cp2.ComplexNO;
    prod.ComplexNO = cp1.realNo*cp2.ComplexNO - cp1.ComplexNO*cp2.realNo;

    cout << prod.realNo << " + " << prod.ComplexNO << "i" <<endl;
    
    return 0;
}