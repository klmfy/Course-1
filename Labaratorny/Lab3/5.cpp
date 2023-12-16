#include <iostream>
using namespace std;

void printPattern(int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            cout << "  ";
        }

        cout << "*";

        if (i > 0) {
            cout << " ";
            for (int j = 0; j < i - 1; ++j) {
                cout << "+ ";
            }
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = N - 2; i >= 0; --i) {
        for (int j = 0; j < N - i - 1; ++j) {
            cout << "  ";
        }

        cout << "*";

        if (i > 0) {
            cout << " ";
            for (int j = 0; j < i - 1; ++j) {
                cout << "+ ";
            }
            cout << "*";
        }

        cout << "\n";
    }
}

int main() {
    int N;
    cin >> N;

    printPattern(N);

    return 0;
}
