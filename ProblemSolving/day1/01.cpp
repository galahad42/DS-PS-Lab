#include<iostream>
using namespace std;

// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character),
// and depending upon which the total salary is calculated as -                            totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic,
// da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if 
// grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.

int main()
{
    int basicSalary;
    char grade;
    float totalSalary;

    cin >> basicSalary >> grade;

    float hra = 0.2*basicSalary;
    float da = 0.5*basicSalary;

    int allow;
    if (grade == 'A'){ allow = 1500; }
    else if ( grade == 'B') { allow = 1500; }
    else { allow = 1300; }

    float pf = 0.11*basicSalary;

    totalSalary = basicSalary + hra + da + allow - pf;

    cout << totalSalary;
    
    return 0;
}