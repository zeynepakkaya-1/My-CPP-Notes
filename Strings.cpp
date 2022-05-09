#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greeting = "Hello";

    // Concatenation
    string firstName = "Zeynep ";
    string lastName = "Akkaya";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    // A string in C++ is actually an object.

    // APPEND
    fullName = firstName.append(lastName);
    cout << fullName << endl;

    // LENGTH()
    cout << fullName.length() << endl;

    // SIZE()
    cout << fullName.size() << endl;

    // index number
    cout << fullName[0] << endl;
    cout << fullName[1] << endl;
    cout << fullName[2] << endl;

    fullName[0] = 'X';
    cout << fullName << endl;

    return 0;
}
