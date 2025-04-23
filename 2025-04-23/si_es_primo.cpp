#include <iostream>
#include <cmath>

// declaration
bool isprime(long n);
void test(void);

int main(void){
    long suma = 0;
    for(int ii = 500; ii <= 1234; ++ii) {
        if (isprime(ii) == true) {
            suma += ii;
        }
    }
     std::cout << suma << "\n";
    return 0;
}

// implementation
bool isprime(long n) {
    // precondition checks
    // do something if n <= 1
    if (n <= 1) {
        std::cerr << "Out of range number: " << n << "\n";
        return false;
    }

    // suppose it is prime
    bool flag = true; 

    if (n == 1) {
        return true;
    }

    // find divisors
    for (long ii = 2; ii <= std::sqrt(n) + 1; ii++) {
        if (n%ii == 0) { // ii is divisor
            flag = false;
            break; // end, at least one divisor
        }
    }

    return flag;
}
