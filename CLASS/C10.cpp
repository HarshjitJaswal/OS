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
