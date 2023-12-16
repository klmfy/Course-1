#include <iostream>

using namespace std;

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

bool findAnySolution(int A, int B, int C, int& x0, int& y0, int& g) {
    g = gcd(abs(A), abs(B), x0, y0);

    if (C % g != 0) {
        return false;
    }

    x0 *= C / g;
    y0 *= C / g;

    if (A < 0) x0 = -x0;
    if (B < 0) y0 = -y0;

    return true;
}

void findSolutions(int A, int B, int C, int P, int Q) {
    int x, y, g;

    if (!findAnySolution(A, B, C, x, y, g)) {
        cout << -1 << endl;
        return;
    }

    A /= g;
    B /= g;

    int sign_a = (A > 0) ? 1 : -1;
    int sign_b = (B > 0) ? 1 : -1;

    int k = (P - x) / B;
    x += k * B;
    y -= k * A;

    while (x <= Q) {
        if (x >= P && x <= Q) {
            cout << x << " " << y << endl;
        }
        x += sign_a * B;
        y -= sign_b * A;
    }
}

int main() {
    int A, B, C, P, Q;
    cin >> A >> B >> C >> P >> Q;

    findSolutions(A, B, C, P, Q);

    return 0;
}
