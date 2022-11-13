//A
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c ,d ,e;
    cout << " cena za 1 kg konfet: ";
    cin >> a;
    cout << " kol-vo konfet v g: ";
    cin >> c;
    cout << " cena za 1 kg pechenya: ";
    cin >> b;
    cout << " kol-vo konfet v g: ";
    cin >> d;
    e = ((a / 1000) * c)+((b / 1000) * d);
    cout << "Itogo: " << e;

    return 0;
}*/
//Б
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c ,d ,e;
    cout << " cena za 1 kg konfet: ";
    cin >> a;
    cout << " kol-vo konfet: ";
    cin >> c;
    cout << " cena za 1 kg pechenya: ";
    cin >> b;
    cout << " kol-vo konfet: ";
    cin >> d;
    e = 3 * (((a / 1000) * c)+((b / 1000) * d));
    cout << "Itogo: " << e;

    return 0;
}
