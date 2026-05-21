#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int space = i; space < n; space++)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); star++) {
            if (star == 1 || star == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = n; space > i; space--)
            cout << " ";

        for (int star = 1; star <= (2 * i - 1); star++) {
            if (star == 1 || star == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}