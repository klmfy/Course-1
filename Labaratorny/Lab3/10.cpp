#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;


    int nod = 1;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0) {
            nod = i;
            break;
        }
    }


    int result = 0;

    result += a / nod;
    result += b / nod;
    result += c / nod;
    result += d / nod;

    cout << result << endl;
    return 0;
}
