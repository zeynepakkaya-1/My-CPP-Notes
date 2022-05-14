#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;

    void carMethod() {
        cout << "Hi from inside the Car class!" << endl;
    }

    void carMethod2();

    int speed(int maxSpeed);
};

void Car::carMethod2() {
    cout << "Hi from outside the Car class!" << endl;
}

int Car::speed(int maxSpeed) {
    cout << "Max speed is: " << flush;
    return maxSpeed;
}

int main() {

    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "M8";
    carObj1.year = 2020;

    Car carObj2;
    carObj2.brand = "Audi";
    carObj2.model = "R8";
    carObj2.year = 2008;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    carObj1.carMethod();
    carObj2.carMethod();
    carObj1.carMethod2();
    carObj2.carMethod2();
    cout << carObj1.speed(305) << endl;
    cout << carObj2.speed(336) << endl;

  return 0;
}
