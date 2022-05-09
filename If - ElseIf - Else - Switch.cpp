#include <iostream>

using namespace std;

int main()
{

    string password = "pw1234";

    cout << "Enter your password > " << flush;

    string userPassword;

    cin >> userPassword;

    cout << "'" << userPassword << "'" << endl;

    if(userPassword == password) {
            cout << "Password accepted." << endl;

    }

    cout << "1 - Add record." << endl;
    cout << "2 - Delete record." << endl;
    cout << "3 - Quit" << endl;

    int value;
    cin >> value;

    if(value == 3) {
        cout << "Application quitting..." << endl;
    }
    else if(value == 1) {
        cout << "Adding record..." << endl;
    }
    else if(value == 2) {
        cout << "Deleting record..." << endl;
    }
    else{
        cout << "Invalid." << endl;
    }

    // ternary operator
    // variable = (condition) ? expressionTrue : expressionFalse;
    int x = 10;
    string result = (x == 10) ? "X is 10." : "X is not 10.";
    cout << result << endl;

    // SWITCH
    switch(value) {
        case 1:
            cout << "Adding record..." << endl;
            break;
        case 2:
            cout << "Deleting record..." << endl;
            break;
        default:
            cout << "Invalid." << endl;
    }

    return 0;
}
