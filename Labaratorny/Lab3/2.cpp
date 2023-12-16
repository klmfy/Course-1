#include <iostream>

using namespace std;

int countZerosInBinary(int num) {
    if (num == 0) {
        return 1;
    }

    int count = 0;
    while (num > 0) {
        if (num % 2 == 0) {
            count++;
        }
        num /= 2;
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = countZerosInBinary(N);

    cout << result << endl;

    return 0;
}
