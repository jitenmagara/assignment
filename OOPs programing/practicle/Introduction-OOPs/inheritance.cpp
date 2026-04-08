#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
public:
    int marks;

    void getStudentData() {
        getPersonData();  
        cout << "Enter marks: ";
        cin >> marks;
    }

    void showStudentData() {
        showPersonData(); 
        cout << "Marks: " << marks << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
public:
    string subject;

    void getTeacherData() {
        getPersonData();  // reuse
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacherData() {
        showPersonData();  // reuse
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "\n--- Student Details ---\n";
    s.getStudentData();
    s.showStudentData();

    cout << "\n--- Teacher Details ---\n";
    t.getTeacherData();
    t.showTeacherData();

    return 0;
}