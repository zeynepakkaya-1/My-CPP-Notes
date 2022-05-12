#include <iostream>
using namespace std;

int main()
{
    string array1[4];  // A variable that holds an array of four strings.

    string cars[4] = {"BMW", "Mercedes", "Maserati", "Volvo"};

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars[3] << endl;

    cars[3] = "Honda";
    cout << cars[3] << endl;

    for (int i = 0; i < 4; i++) {
      cout << i+1 << ":" << cars[i] << "\n";
    }

    string cars2[] = {"Volvo", "BMW", "Mercedes"}; // size of array is always 3.

    string cars3[5] = {"Volvo", "BMW", "Mercedes"}; // size of array is 5, even though it's only 3 elements inside it.
    cars3[3] = "Audi";
    cars3[4] = "Tesla";

    int myNum[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNum) << endl; // 20 bytes (4x5)
    int arrayLength = sizeof(myNum) / sizeof(int);
    cout << arrayLength << endl; // 5

    for (int i = 0; i < arrayLength; i++) {
      cout << myNum[i] << " " << flush;
    }
    cout << endl;
/*
    for (unsigned int i = 0; i < arrayLength; i++) {
      cout << myNum[i] << " " << flush;
    }
    cout << endl;
*/

    string letters[2][4] = {
      { "A", "B", "C", "D" },
      { "E", "F", "G", "H" }
    };

    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 4; j++) {
        cout << letters[i][j] << " " << flush;
      }
      cout << endl;
    }

    cout << sizeof(letters) << endl; // 256
    cout << sizeof(letters[0]) << endl; // 128
    cout << sizeof(letters[1]) << endl; // 128
    cout << sizeof(string) << endl; // 32

    for(int i = 0; i < sizeof(letters)/sizeof(letters[0]); i++) {
      for(int j = 0; j < sizeof(letters[0])/sizeof(string); j++) {
        cout << letters[i][j] << " " << flush;
      }
      cout << endl;
    }

    string letters2[2][2][2] = {
      {
        { "A", "B" },
        { "C", "D" }
      },
      {
        { "E", "F" },
        { "G", "H" }
      }
    };

    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 2; j++) {
        for(int k = 0; k < 2; k++) {
          cout << letters2[i][j][k] << endl;
        }
      }
    }

    cout << letters2[0][0][0] << endl; // A

    int values[3];
    cout << values[0] << endl;

    int values2[3] = { }; // all 0
    cout << values2[0] << endl;
    cout << values2[1] << endl;
    cout << values2[2] << endl;

    return 0;
}
