#include <iostream>
#include "arithmetic.h"
#include "geometry.h"
#include "conversion.h"
using namespace std;

int main() {
    //arithmetic testing
    cout << sum(2,1) << endl;
    cout << sub(3,2) << endl;
    cout << multiply(5,2) << endl;
    cout << divide(10,2) << endl;
    //geometry
    geometry g;
    cout << g.areaOfCircle(9) << endl;
    cout << g.areaOfRectangle(5,6) << endl;
    cout << g.volumeOfBox(3,6,8) << endl;
    //conversion
    cout << celsiusToFahrenheit(23.3) << endl;
    cout<< fahrenheitToCelsius(75.8) << endl;
    cout << inchesToCentimeters(12)<< endl;
    cout << centimetersToInches(63)<< endl;

    return 0;
}