#include <iostream>
using namespace std;

int main() {
    // Implicit Type Conversion
    int a = 10;
    float b = 5.5;

    float result1 = a + b;  

    cout << "Implicit Type Conversion:" << endl;
    cout << "a (int) + b (float) = " << result1 << endl;

    // Explicit Type Conversion
    float x = 9.8;
    int y;

    y = (int)x; 

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "x (float) = " << x << endl;
    cout << "After casting to int, y = " << y << endl;

    return 0;
}