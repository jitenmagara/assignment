#include <iostream>
using namespace std;

int main() {
    // Variables
    int age = 20;
    float height = 5.9;
    char grade = 'A';

    // Constant
    const float PI = 3.1416;

    // Display initial values
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Value of PI (constant): " << PI << endl;

    // Performing operations
    age = age + 2;        
    float area = PI * height * height;  

    cout << "\nAfter operations:" << endl;
    cout << "Updated Age: " << age << endl;
    cout << "Calculated Area: " << area << endl;
    return 0;
}