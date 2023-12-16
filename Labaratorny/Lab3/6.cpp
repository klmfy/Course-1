#include <iostream>
#include <cmath>

using namespace std;

int findMinMatches(int S) {
    int min_matches = S * 4;

    for (int a = 1; a <= sqrt(S); ++a) {
        if (S % a == 0) {
            int b = S / a;
            int matches = 2 * (a + b);
            min_matches = min(min_matches, matches);
        }
    }

    return min_matches;
}

int main() {
    int S;
    cin >> S;

    int result = findMinMatches(S);

    cout << result << endl;

    return 0;
}
