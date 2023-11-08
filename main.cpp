#include <iostream>
#include <cmath>

using namespace std;
int isPrime(int n);

int main() {
    int primeCounter = 0;
#pragma parallel for
    for (int i = 2; i <= 10000000; i++) {
        if (isPrime(i) == 1) {
            primeCounter++;
        }
    }
    cout <<"Number of primes: " << primeCounter;
    return 0;
}

int isPrime(int n) {

    if (n == 2) { return 1; } //it is a prime number
    if (n == 3) { return 1; } //it is a prime number

    int limit = int(sqrt(n)) + 1;
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
