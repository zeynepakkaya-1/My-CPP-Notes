#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{

    /*
    */

    cout << "Max int value: " << INT_MAX << endl;
    // Max int value: 2147483647

    cout << "Min int value: " << INT_MIN << endl;
    // Min int value: -2147483648

    // -2^31
    // 2^31 - 1

    long int lValue;
    cout << "Max long value: " << LONG_MAX << endl;
    // Max long value: 2147483647
    cout << "Min long value: " << LONG_MIN << endl;
    // Min long value: -2147483648

    short int sValue;
    cout << "Max short value: " << SHRT_MAX << endl;
    // Max short value: 32767
    cout << "Min short value: " << SHRT_MIN << endl;
    // Min short value: -32768

    // -2^15 and 2^15-1

    cout << "Size of int: " << sizeof(int) << endl;
    // Size of int: 4
    // 4 bytes - 32 bits

    // 2 or 4 bytes

    cout << "Size of short int: " << sizeof(short) << endl;
    // Size of short int: 2 bytes

    cout << "Size of long int: " << sizeof(long) << endl;
    // Size of long int: 4 bytes

    unsigned int uValue = 12341234;  // only positive
    cout << uValue << endl;

    float fValue = 12.34;
    cout << fValue << endl;

    cout << fixed << fValue << endl;
    // 12.340000
    cout << scientific << fValue << endl;
    // 1.234000e+01

    cout << sizeof(float) << endl;  // 4 bytes

    cout << setprecision(10) << fixed << fValue << endl;
    // 12.3400001526

    double dValue = 12.34;
    cout << dValue << endl;
    // 12.3400000000

    cout << setprecision(10) << fixed << dValue << endl;
    // 12.3400000000
    cout << setprecision(20) << fixed << dValue << endl;
    // 12.33999999999999985789

    cout << sizeof(double) << endl;  // 8 bytes

    long double lDouble;
    cout << sizeof(lDouble) << endl; // 16 bytes

    /*
    float vs. double
    The precision of a floating point value indicates how many digits
    the value can have after the decimal point.

    The precision of float is only six or seven decimal digits, while
    double variables have a precision of about 15 digits.
    */

    // a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;  // 35x10^3
    double d1 = 12E4;  // 12x10^4
    cout << f1 << endl;
    cout << d1 << endl;

    bool bValueT = true;
    bool bValueF = false;
    cout << bValueT << endl; // 1
    cout << bValueF << endl; // 0
    // 1 byte

    char cValue = 55;  // ASCII
    cout << cValue << endl;  // 7
    cValue = '7';
    cout << (int)cValue << endl;  // 55

    cout << sizeof(char) << endl;  // 1 byte
    // from -128 to 127
    // a single character/letter/number, or ASCII values

    wchar_t wValue = 'a';
    cout << wValue << endl;  // 97
    cout << (char)wValue << endl;  // a

    cout << sizeof(wchar_t) << endl;  // 2 bytes

    return 0;
}
