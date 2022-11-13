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
    y = a + b - c * d; //Я не знаю почему, но ответ выходит не тот который в том доке(но при этом у меня выходит правильный)
    cout << "Otvet: " << y << endl;

    return 0;
}
