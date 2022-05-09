#include <iostream>

using namespace std;

int main()
{
    int numberCats = 4;
    cout << "Number of cats: " << numberCats << endl;

    int numberDogs = 2;
    cout << "Number of dogs: " << numberDogs << endl;

    cout << "Total number of animals: " << numberCats + numberDogs << endl;

    cout << "We have a new cat!" << endl;
    numberCats = numberCats + 1;
    cout << "New number of cats: " << numberCats << endl;

    int numberAnimals = numberCats + numberDogs;
    cout << "New number of animals: " << numberAnimals << endl;

    // int is a type, but string is a class.

    string myString = "This is a string.";
    cout << myString << endl;
    cout << myString + " " + myString << endl;

    int myNum;
    myNum = 10;
    cout << myNum << endl;

    myNum = 20;
    cout << myNum << endl;

    int x = 1, y = 2, z = 3;
    cout << x + y + z << endl;

    int a, b, c;
    a = b = c = 5;
    cout << a + b + c << endl;

    const int minutesPerHour = 60;
    const float PI = 3.14;

    return 0;
}
