#include<iostream>
using namespace std;

class Student {
private: 
    string lname;
public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;

    // Constructor(ctor)
    // Default ctor
    Student() {
        cout << "Student Default ctor called" << endl;
    }
    // Parameterized ctor
    Student(int _id, int _age, bool _present, string _name, int _nos, string _lname) {
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        lname = _lname;
        v = new int(10);
        cout << "Student Parameterized ctor called" << endl;
    }

    Student(int id, int age, bool present, string name, int nos) {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout << "Student Parameterized ctor w/o lname called" << endl;
    }


    // Copy ctor
    Student(const Student &srcobj) {
        cout << "Student Copy ctor called" << endl;
        this->name = srcobj.name;
        this->id = srcobj.id;
        this->lname = srcobj.lname;
        this->age = srcobj.age;
        this->present = srcobj.present;
        this->nos = srcobj.nos;
    }

    // getter / setter
    string getLName() {
        return lname;
    }
    void setLName(string lname) {
        this->lname = lname;
    }

    void study() {
        cout << "Studying" << endl;
    }
    void sleep() {
        cout << "Sleeping" << endl;
    }
    void bunk() {
        cout << "Bunking class" << endl;
    }
    // dtor
    ~Student() {
        cout << "Student dtor called" << endl;
        delete v;
    }
private:
    void privateInfo() {
        cout << "Private Information" << endl;
    }
};

int main() {

    /*
    // Stack
    // cout << sizeof(Student) << endl;  // size of the object of the class student
    Student s1;
    // s1.name = "Anisha";
    // s1.age = 19;
    // s1.id = 359;
    // s1.nos = 7;
    // s1.present = 1;

    Student s2(1, 12, 1, "John", 5, "Doe");
    cout << s2.name << endl;
    cout << s2.id << endl;
    
    Student s3(2, 15, 0, "Lokesh", 5);
    cout << s3.name << endl;

    // Dynamic Memory Allocation - Heap
    Student *s4 = new Student(3, 34, 1, "Ram", 6);
    cout << s4->name << endl;
    cout << (*s4).name << endl;

    delete s4; // no leak
    // s2.name = "Ritik";
    // s2.age = 20;
    // s2.id = 120;
    // s2.nos = 8;
    // s2.present = 0;
    */

    /*
    // Copy ctor
    Student s1(1, 12, 1, "John", 5, "Doe");
    // Student s2 = s1; // Method - 1 to call copy ctor
    Student s2(s1); // Method - 2 to call copy ctor

    cout << s1.name << endl;
    cout << s2.name << endl;
    */

    Student s1(1, 12, 1, "John", 5, "Doe");
    cout << s1.name << endl;
    cout << s1.getLName() << endl;
    s1.setLName("Smith");
    cout << s1.getLName() << endl;

    return 0;
}