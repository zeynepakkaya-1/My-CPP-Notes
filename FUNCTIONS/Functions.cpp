#include <iostream>
using namespace std;

void sayHi() {
  cout << "Hi!" << endl;
}

void sayHi_2();

void yourName(string firstName) {
  cout << "Your first name is: " << firstName << endl;
}

void yourName_2(string firstName = "defName") { // optional parameter
  cout << "Your first name is: " << firstName << endl;
}

void yourNameAge(string firstName, int age) {
  cout << "Your first name is: " << firstName << "\tYour age is: " << age << endl;
}

int add5(int x) {
  return 5 + x;
}

int plusFunc(int x, int y) {
  return x + y;
}
double plusFunc(double x, double y) {
  return x + y;
}
float plusFunc(float x, float y) {
  return x + y;
}

int main() {

    sayHi();
    sayHi_2();

    yourName("Zeynep");
    yourName_2();

    yourNameAge("Zeynep", 20);

    cout << add5(95) << endl;

    int num100 = add5(95);
    cout << num100 << endl;

    int myNum1 = plusFunc(5, 15);
    double myNum2 = plusFunc(5.2, 15.2);
    float myNum3 = plusFunc(5.21, 15.21);
    cout << myNum1 << endl;
    cout << myNum2 << endl;
    cout << myNum3 << endl;

  return 0;
}

void sayHi_2() {
  cout << "Hi!" << endl;
}
