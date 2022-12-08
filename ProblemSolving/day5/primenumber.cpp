// using sieve of eratosthenes

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int isPrime(int n){
    for(int i = 2; i< sqrt(n); i++){
        if(n%i == 0){
            // cout << "Is Not Prime" << endl;
            return 0;
        }
    }
    // cout << "Is Prime" << endl;
    return 1;

}

int primeRange(int n){
    cout << 2 << " " << 3 << " " << 5 << " ";
    for(int i = 6; i <= n; i++ ){
        if(i%2 == 0 || i%3 == 0 || i%5 == 0){
            continue;
        }
        else{
            if(isPrime(i) == 1){
                cout << i << " ";
            }
        }
    }

}

int sieveOfEratosthenes(int n){
    
    
}

    int
    main()
{
    int n;
    cin >> n;
    // isPrime(n);
    primeRange(n);

    return 0;
}