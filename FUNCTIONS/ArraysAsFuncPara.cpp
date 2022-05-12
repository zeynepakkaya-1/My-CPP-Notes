#include <iostream>
using namespace std;

void arrayFunc(int myNums[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNums[i] << endl;
  }
}

int main() {
    int myNums[5] = {10, 20, 30, 40, 50};
    arrayFunc(myNums);

  return 0;
}
