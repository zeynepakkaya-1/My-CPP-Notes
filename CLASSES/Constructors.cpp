#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

class Car2 {
  public:
    string brand;
    string model;
    int year;

    Car2(string x, string y, int z);
};

// Constructor definition outside the class
Car2::Car2(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {

    Car carObj1("BMW", "M8", 2020);
    Car carObj2("Audi", "R8", 2008);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

  return 0;
}
