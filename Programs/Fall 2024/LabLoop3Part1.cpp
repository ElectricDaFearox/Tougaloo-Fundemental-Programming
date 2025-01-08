#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 12; i++) {
        for (int l = 1; l <= 12; l++) {
            cout << i * l << "\t";
        }
        cout << endl;
    }

    return 0;
}
