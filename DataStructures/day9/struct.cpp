#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct studentDB
{
    int rollNo;
    string name;
    int age;
    string address;
    int marks[6];
    string eligible;
};


int main()
{
    int n;
    cin >> n;
    struct studentDB secA[n];
    for(int i = 0; i < n; i++){
        cout << "\nPlease enter your roll no.: ";
        cin >> secA[i].rollNo;
        cout << "Please enter your name: ";
        cin >> secA[i].name;
        cout << "Please enter your marks out of  in the 6 subjects: ";
        for(int j = 0; j< 6; j++){
            cin >> secA[i].marks[j];
        }

        // sort(secA[i].marks, secA[i].marks+6, greater<int>());
        int min1 = INT32_MAX;
        int min2 = INT32_MAX;
        int index = -1;
        for(int j = 0; j < 6; j++){
            if(secA[i].marks[j] < min1){
                min1 = secA[i].marks[j];
                index = j;
            }
        }
        for(int j = 0; j< 6; j++){
            if (secA[i].marks[j] == min1){
                continue;
            }
            if (secA[i].marks[j] < min2){
                min2 = secA[i].marks[j];
            }
        }


        secA[i].eligible = "no";
        float sum = 0;
        for(int j = 0; j<6; j++){
            if (secA[i].marks[j] == min1 || secA[i].marks[j] == min2)
            {
                continue;
            }
            sum += secA[i].marks[j];
        }
        if((sum/4) >= 95){
            secA[i].eligible = "yes";
        }

    }

    for(int i = 0; i< n; i++){
        cout << secA[i].rollNo << " " << secA[i].name << " | Is eligible: " << secA[i].eligible << endl;
    }

    return 0;
}