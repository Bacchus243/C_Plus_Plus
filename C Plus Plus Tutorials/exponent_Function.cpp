#include <iostream>


using namespace std;


int power(int base, int exponent) {
    int result = 1;

    for(int i = 0; i < exponent; i++){
        result = result * base;
    }

    return result;
}


int main()
{
    int base, exponent;

    cout << "\nEnter an exponent base number: ";
    cin >> base;

    cout << "\n\nEnter the power of the exponent: ";
    cin >> exponent;

    cout << "\n\nThe result is: " << power(base, exponent) << "\n\n";

    return 0;
}