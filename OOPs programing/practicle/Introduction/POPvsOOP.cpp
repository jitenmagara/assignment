#include <iostream>
using namespace std;

// POP (Procedural Programming)
int calculateAreaPOP(int length, int width) {
    return length * width;
}

//OOP (Object-Oriented Programming)
class Rectangle {
private:
    int length, width;

public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    int calculateAreaOOP() {
        return length * width;
    }
};

int main() {
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    // Using POP 
    int area1 = calculateAreaPOP(length, width);
    cout << "\n[POP] Area of rectangle = " << area1 << endl;

    //  Using OOP
    Rectangle r;
    r.setData(length, width);
    int area2 = r.calculateAreaOOP();
    cout << "[OOP] Area of rectangle = " << area2 << endl;

    return 0;
}