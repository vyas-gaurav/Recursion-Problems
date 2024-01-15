#include<iostream> 
using namespace std;

int power(int base, int exponent) {
    // base case
    if (exponent == 0)
        return 1;

    // recursive case
    int smallerProblem = power(base, exponent - 1);
    int biggerProblem = base * smallerProblem;

    return biggerProblem;
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    int ans = power(base, exponent);

    cout << ans << endl;

    return 0;
}
