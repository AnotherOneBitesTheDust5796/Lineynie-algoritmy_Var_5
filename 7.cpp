#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main() {
    double a, s, p;
    cout << "Vvedite chislo: ";
    cin >> a;
    s = pow(a,2);
    p = pow(a,3);
    cout << "Kvadrat chisla = " << s << endl << "Kub chisla = " << p;

    return 0;
}
