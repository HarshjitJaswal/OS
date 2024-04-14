#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student stu;
    stu.setName("Alice");
    stu.setAge(20);
    stu.display();
    return 0;
}
