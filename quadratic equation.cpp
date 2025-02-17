#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    float D;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "x any\n";
            }
            else {
                cout << "no solution\n";
            }
        }
        else if (c == 0){
            cout << "x = 0\n";
        }
        else {
            cout << "x = " << -c / b << endl;
        }
    }
    else {
        D = b * b - 4 * a * c;

        if (D < 0) {
            cout << "no solution\n";
        }
        else if (D > 0) {
            cout << "x1 = " << (-b - sqrt(D)) / (2 * a) << endl;
            cout << "x2 = " << (-b + sqrt(D)) / (2 * a) << endl;
        }
        else {
            cout << "x = " << (-b) / (2 * a) << endl;
        }
    }

    return 0;
}