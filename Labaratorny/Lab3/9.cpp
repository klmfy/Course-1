#include <iostream>

using namespace std;

int findMaxNumber() {
    int max_num = -1001;
    int num;

    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    return max_num;
}

void printMaxNumber(int max_num) {
    cout << max_num << endl;
}

int main() {
    int max_num = findMaxNumber();
    printMaxNumber(max_num);

    return 0;
}
