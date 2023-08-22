#include <iostream>


using namespace std;


int calculator(int num1, int num2, char op) {
    int result;

    if(op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else {
        cout << "Invalid Operator" << endl;
    }
    
    return result;

}


int main()
{

    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "\nEnter operator: ";
    cin >> op;

    cout << "\nEnter second number: ";
    cin >> num2;

    
    cout << "\n\n" << calculator(num1, num2, op) << "\n\n\n";


    return 0;
}