#include <iostream>

using namespace std;

void printPattern(int N) {
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            cout << "  ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "+";
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    printPattern(N);

    return 0;
}
