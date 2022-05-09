#include <iostream>

using namespace std;

int main()
{
    string fullName;
    cout << "Type your full name: " << flush;
    getline (cin, fullName);
    cout << "Your name is: " << fullName << endl;

    /*
    cin considers a space (whitespace, tabs, etc) as a terminating character,
    which means that it can only display a single word (even if you type many words).

    getline() function to read a line of text.
    It takes cin as the first parameter, and the string variable as second.
    */

    return 0;
}
