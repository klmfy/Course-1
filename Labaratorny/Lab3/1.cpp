#include <iostream>

using namespace std;

void printEvenNumbers(int N) {
    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
    }
}

void processInput(int N) {
    if (N % 2 == 0) {
        printEvenNumbers(N);
    } else {
        N = N - 1;
        printEvenNumbers(N);
    }
}

int main() {
    int N;
    cin >> N;

    processInput(N);

    return 0;
}
