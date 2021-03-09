#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    bool isPrime = true;

    cout << "This program will output all the prime numbers between 2 numbers" << endl;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;

    cout << "The prime numbers between " << num1 << " and " << num2 << " are: " << endl;

    while (num1 < num2) {
        isPrime = true;
        if (num1 == 0 || num1 == 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= num1 / 2; ++i) { // Divided by 2 becasue a prime number is always less than half of the num
                if (num1 % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << num1 << endl;

        ++num1;
    }

    return 0;
}

