#include <iostream>
using namespace std;

int main() {

    struct {
      int myNum;
      string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    struct {
      int myNum;
      string myString;
    } myStruct1, myStruct2, myStruct3;
    // Multiple structure variables separated with commas.

    struct {
      string brand;
      string model;
      int year;
    } myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "M8";
    myCar1.year = 2020;

    myCar2.brand = "Audi";
    myCar2.model = "R8";
    myCar2.year = 2008;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

  return 0;
}
