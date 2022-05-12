#include <iostream>
using namespace std;

int main() {

    string food = "Brownie";  // food variable

    string &meal = food;    // reference to food

    cout << food << endl; // Brownie
    cout << meal << endl; // Brownie

    cout << &food << endl; // 0x61fdd0
    // memory address in hexadecimal form

    string* ptr = &food;
    cout << ptr << endl; // 0x61fdd0
    cout << *ptr << endl; // Brownie

    *ptr = "Fettuccine";
    cout << *ptr << endl; // Fettuccine
    cout << food << endl; // Fettuccine

  return 0;
}
