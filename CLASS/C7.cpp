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
