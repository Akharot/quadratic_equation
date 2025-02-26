#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    float a, b, c;
    float D;

    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "the file did not open" << endl;
        return 1;
    }

    inputFile >> a;
    inputFile >> b;
    inputFile >> c;

    inputFile.close();


    ofstream outputFile("output.txt");
    if (!outputFile) {
        cout << "the file did not open" << endl;
        return 1;
    }


    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                outputFile << "x any\n";
            }
            else {
                outputFile << "no solution\n";
            }
        }
        else if (c == 0) {
            outputFile << "x = 0\n";
        }
        else {
            outputFile << "x = " << -c / b << endl;
        }
    }
    else {
        D = b * b - 4 * a * c;
        outputFile << "D = " << D << endl;

        if (fabs(D) < 0.000000001) {
            outputFile << "x = " << (-b) / (2 * a) << endl;
        }
        else if (D > 0) {
            outputFile << "x1 = " << (-b - sqrt(D)) / (2 * a) << endl;
            outputFile << "x2 = " << (-b + sqrt(D)) / (2 * a) << endl;
        }
        else {
            outputFile << "no solution\n";
        }
    }

    outputFile.close();

    return 0;
}
