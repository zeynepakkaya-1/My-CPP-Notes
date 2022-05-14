#include <iostream>
using namespace std;

class Employee {
  protected:
    int salary;

  public:

    // Setter
    void setSalary(int s) {
      salary = s;
    }

    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {

    Employee myObj;

    myObj.setSalary(10000);
    cout << myObj.getSalary();

  return 0;
}
