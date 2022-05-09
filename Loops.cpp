#include <iostream>

using namespace std;

int main()
{

    /*
    && AND
    & bit-wise AND

    || OR
    | bit-wise OR
    */

    // WHILE LOOP
    int i = 0;
    while(i < 5) {
        cout << i << " Hi" << endl;
        i = i + 1;
    }

    // FOR LOOP
    for(int i=0; i<5; i++) {
        cout << "i is " << i << endl;
    }

    // BREAK
    for(int j=0; j<5; j++) {
        if(j == 3) {
            break;
        }
        cout << "j is " << j << endl;
    }

    // CONTINUE
    for(int k=0; k<5; k++) {
        if(k == 3) {
            continue;
        }
        cout << "k is " << k << endl;
    }

    const string password = "pw1234";

    string userPassword;

    /*
    cout << "Enter your password > " << flush;
    cin >> userPassword;
    */

    /*
    USING IF ELSE
    if(userPassword == password) {
        cout << "Access accepted." << endl;
    }
    else {
        cout << "Access denied." << endl;
    }
    */

    /*
    USING WHILE
    while(userPassword != password) {
        cout << "Access denied." << endl;

        cout << "Enter your password > " << flush;
        cin >> userPassword;
    }
    cout << "Access accepted." << endl;
    */

    // USING DO-WHILE
    do {
        cout << "Enter your password > " << flush;
        cin >> userPassword;

        if (userPassword != password) {
            cout << "Access denied." << endl;
        }
    } while(userPassword != password);
    cout << "Access accepted." << endl;

    // USING DO-WHILE WITH BREAK KEYWORD
    do {
        cout << "Enter your password > " << flush;
        cin >> userPassword;

        if (userPassword == password) {
            break;
        } else {
            cout << "Access denied." << endl;
        }
    } while(true);
    cout << "Access accepted." << endl;

    // USING DO-WHILE WITH CONTINUE KEYWORD
    do {
        cout << "Enter your password > " << flush;
        cin >> userPassword;

        if (userPassword != password) {
            cout << "Access denied." << endl;
            continue;
        }
    } while(userPassword != password);
    cout << "Access accepted." << endl;

    return 0;
}
