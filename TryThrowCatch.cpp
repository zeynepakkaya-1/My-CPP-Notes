#include <iostream>
using namespace std;

int main() {

    try {
      int age = 15;

      if (age >= 18) {
        cout << "Access granted.\n";
      } else {
        throw (age);
      }
    }
    catch (int myNum) {
      cout << "Access denied.\n";
      cout << "Age is: " << myNum << endl;
    }

    try {
      int age = 15;

      if (age >= 18) {
        cout << "Access granted.\n";
      } else {
        throw (age);
      }
    }
    catch (...) { // If you do not know the throw type used in the try block:
      cout << "Access denied.\n";
    }

  return 0;
}
