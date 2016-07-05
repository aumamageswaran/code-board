/*
This program is created by Akul Umamageswaran.
Solution code to Project Euler Problem 2. Finds the sum of all even values of the Fibonacci sequence up to N.
*/

#include <iostream>
using namespace std;

int main() {
    int fib1 = 0;
    int fib2 = 1;
    int sum = 0;
    int N = 0;
    
    cout<<"Up until which number would you like the sum of all even values of the Fibonacci sequence? (value of N)"<<"/n";
    cin<<N;
    
    while (fib1 <= N) {
        fib1 += fib2;
        if (fib1 % 2 == 0) {
            sum += fib1;    
        }
        fib2 += fib1;
        if (fib2 % 2 == 0) {
            sum += fib2;
        }
    }
    cout<<sum;
    return 0;
}
