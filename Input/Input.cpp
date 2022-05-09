#include <iostream>

using namespace std;

int main()
{
    /*
    << insertion operator
    >> extraction operator
    */

    cout << "Enter your name: " << flush;

    string userName;
    cin >> userName;

    cout << "You entered: " << userName << endl;

    cout << "Enter your age: " << flush;

    int userAge;
    cin  >> userAge;

    cout << "Your age: " << userAge << endl;

    return 0;
}
