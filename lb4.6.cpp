#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int i, j;

    
    P = 1;
    i = 1;
    while (i <= 3) {
        S = 0;
        j = 1;
        while (j <= 4 - i) {
            S += pow(tan(i),j) / (i + j * j);
            j++;
        }
        P *= sqrt(S);
        i++;
    }
    cout  << P << endl;

    
    P = 1;
    i = 1;
    do {
        S = 0;
        j = 1;
        do {
            S += pow(tan(i), j) / (i + j * j);
            j++;
        } while (j <= 4 - i);
        P *= sqrt(S);
        i++;
    } while (i <= 3);
    cout << P << endl;

    
    P = 1;
    for (i = 1; i <= 3; i++) {
        S = 0;
        for (j = 1; j <= 4 - i; j++) {
            S += pow(tan(i), j )/ (i + j * j);
        }
        P *= sqrt(S);
    }
    cout << P << endl;

    
    P = 1;
    for (i = 3; i >= 1; i--) {
        S = 0;
        for (j = 4 - i; j >= 1; j--) {
            S += pow(tan(i), j )/ (i + j * j);
        }
        P *= sqrt(S);
    }
    cout << P << endl;

    return 0;
}
