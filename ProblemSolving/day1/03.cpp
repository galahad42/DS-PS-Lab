#include<iostream>

using namespace std;

// check whether an alphabet entered by the user is a vowel or a consonant.

int main()
{
    char alphabet;
    cin >> alphabet;

    alphabet = tolower(alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'){
        cout << "vovel" << endl;
    }
    else {
        cout << "consonant" << endl;
    }

        return 0;
}