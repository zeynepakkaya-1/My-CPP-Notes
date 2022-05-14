#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("file_1.txt");
    MyFile << "Hello World!";
    MyFile.close();

    string myText;
    ifstream MyReadFile("file_1.txt");
    while (getline (MyReadFile, myText)) {
      cout << myText << endl;
    }
    MyReadFile.close();

  return 0;
}
