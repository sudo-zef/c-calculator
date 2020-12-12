#include <iostream>
using namespace std;

int main() {
    char o;
    float n1, n2;

    cout << "Enter an operater (Addition: + Subtraction: - Multiplication: * Divison: /): ";
    cin >> o;

    cout << "Enter Oprend 1: ";
    cin >> n1;
    cout << "Enter Oprend 2: ";
    cin >> n2;

    switch (o) {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    default:
        cout << "Wrong operator. Please rerun the program";
        break;
    }
}