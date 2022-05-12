#include <iostream>
using namespace std;

struct car {
  string brand;
  string model;
  int year;
};

int main() {

    struct myDataType { // This structure is named "myDataType".
      int myNum;
      string myString;
    };

    myDataType myVar;

    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "M8";
    myCar1.year = 2020;

    car myCar2;
    myCar2.brand = "Audi";
    myCar2.model = "R8";
    myCar2.year = 2008;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

  return 0;
}
