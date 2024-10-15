#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout << "Enter First Number" << endl;
    cin >> n1;
    cout << "Enter Second Number" << endl;
    cin >> n2;
    cout << "Enter the opertor" << endl;
    cin >> op;

    switch (op)
    {
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
        break;
    }
    return 0;
}
