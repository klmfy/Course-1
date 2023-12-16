#include <iostream>
#include <cmath>

using namespace std;

int calculateYearsToReachAmount(int initialAmount, double annualInterestRate, int targetAmount) {
    int years = 0;

    while (initialAmount < targetAmount) {
        initialAmount += floor(initialAmount * (annualInterestRate / 100));
        years++;
    }

    return years;
}

int main() {
    int N, M;
    double P;

    cin >> N >> P >> M;

    int result = calculateYearsToReachAmount(N, P, M);

    cout << result << endl;

    return 0;
}
