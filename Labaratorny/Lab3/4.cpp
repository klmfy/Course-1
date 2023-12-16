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

int main() {
    int result = findMaxNumber();

    cout << result << endl;
    return 0;
}
