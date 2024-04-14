#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    double calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
Simple Temperature Converter Class:
cpp
Copy code
#include <iostream>
using namespace std;

class TemperatureConverter {
public:
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }

    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }
};

int main() {
    TemperatureConverter converter;
    double celsius = 25;
    cout << celsius << " Celsius = " << converter.celsiusToFahrenheit(celsius) << " Fahrenheit" << endl;
    double fahrenheit = 77;
    cout << fahrenheit << " Fahrenheit = " << converter.fahrenheitToCelsius(fahrenheit) << " Celsius" << endl;
    return 0;
}
Simple Circle Class:
cpp
Copy code
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c;
    c.setRadius(5);
    cout << "Area: " << c.calculateArea() << endl;
    cout << "Circumference: " << c.calculateCircumference() << endl;
    return 0;
}
Simple Date Class:
cpp
Copy code
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d;
    d.setDate(14, 4, 2024);
    d.display();
    return 0;
}
Simple Counter Class:
cpp
Copy code
#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void increment() {
        count++;
    }

    void decrement() {
        if (count > 0)
            count--;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.display(); // Output: Count: 2
    c.decrement();
    c.display(); // Output: Count: 1
    return 0;
}
Simple Employee Class:
cpp
Copy code
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    void setData(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setData("John Doe", 30, 50000);
    emp.display();
    return 0;
}
Simple Time Class:
cpp
Copy code
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display() {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time t;
    t.setTime(9, 30, 45);
    t.display();
    return 0;
}
