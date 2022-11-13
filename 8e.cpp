#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main() {
    double a, b, c, d, x, y;
    cout << "Vvedite x: ";
    cin >> x;
    a = exp(x - 2);
    b = abs(sin (x * PI / 180));
    c = pow(x,4);
    d = cos((1/x) * PI /180);
    y = a + b - c * d;
    cout << "Otvet: " << y << endl;

    return 0;
}
