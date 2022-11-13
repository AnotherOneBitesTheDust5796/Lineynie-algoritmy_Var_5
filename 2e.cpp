#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main() {
    double a, b, s, p;
    cout << "Vvedite dlinu storoniy: ";
    cin >> a;
    cout << "Vvedite ugol: ";
    cin >> b;
    p = a * 4;
    s = pow(a,2) * sin(b * PI / 180);
    cout<<"S="<<s<<"  "<<"P="<<p<<"\n";

    return 0;
}
