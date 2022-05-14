#include <iostream>
using namespace std;

class Vehicle {
  public:
    string brand = "Honda";

    void sayHi() {
      cout << "Hi!" << endl;
    }
};

class Car: public Vehicle {
  public:
    string model = "Civic";
};

int main() {

    Car myCar;

    myCar.sayHi();

    cout << myCar.brand + " " + myCar.model << endl;

  return 0;
}
