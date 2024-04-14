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
