//9-1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int square_a = pow(a, 2);
    int square_b = pow(b, 2);

    if (a < b) {
        cout << square_b << endl;
        cout << square_a << endl;
    } else if (a > b) {
        cout << square_a << endl;
        cout << square_b << endl;
    } else {
        cout << square_a << endl;
        cout << square_b << endl;
    }

    return 0;
}

//9-1.1
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

//9-2
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        int number;
        cin >> number;
        int conditions_met = 0;

        if (number >= 1000 && number <= 9999) {
            int digits[10] = {0};
            int temp = number;
            bool all_unique = true;

            while (temp > 0) {
                int digit = temp % 10;
                digits[digit]++;
                if (digits[digit] > 1) {
                    all_unique = false;
                    break;
                }
                temp /= 10;
            }

            if (all_unique) {
                conditions_met++;
            }
        }

        if (number % 10 == 3 || number % 10 == 6 || number % 10 == 9) {
            conditions_met++;
        }

        if (number >= 100 && number <= 999) {
            int temp = number;
            bool has_zero = false;
            while (temp > 0) {
                if (temp % 10 == 0) {
                    has_zero = true;
                    break;
                }
                temp /= 10;
            }
            if (has_zero) {
                conditions_met++;
            }
        }

        if (conditions_met == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
//9-3
#include <iostream>

using namespace std;

int main() {
    int count;
    int length;
    cin >> count >> length;
    if (count == 1) {
        int L = length;
        cout << L << endl;
    } else if (count == 2) {
        int L = length * 10;
        cout << L << endl;
    } else if (count == 3) {
        int L = length * 100;
        cout << L << endl;
    } else if (count == 4) {
        int L = length * 1000;
        cout << L << endl;
    } else if (count == 5) {
        int L = length * 1000000;
        cout << L << endl;
    }
    return 0;
}
//9-4
#include <iostream>

using namespace std;

int main() {
    int X1, Y1, X2, Y2;
    int X3, Y3, X4, Y4;

    cin >> X1 >> Y1 >> X2 >> Y2;
    cin >> X3 >> Y3 >> X4 >> Y4;

    int X_left = max(X1, X3);
    int Y_top = max(Y1, Y3);
    int X_right = min(X2, X4);
    int Y_bottom = min(Y2, Y4);

    if (X_left < X_right && Y_top < Y_bottom) {
        int intersection_area = (X_right - X_left) * (Y_bottom - Y_top);
        cout << intersection_area << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

//9-5
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, X, Y, M, T;
    cin >> N >> X >> Y >> M >> T;

    int horizontal_distance = abs(M - X);
    int vertical_distance = abs(T - Y);

    int min_moves = max(horizontal_distance, vertical_distance);

    cout << min_moves << endl;

    return 0;
}

//9-6
#include <iostream>
using namespace std;

int main() {
    int prices[4];
    for (int i = 0; i < 4; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (prices[i] > prices[j]) {
                int temp = prices[i];
                prices[i] = prices[j];
                prices[j] = temp;
            }
        }
    }

    int case1 = prices[0] + prices[1] + prices[2] + prices[3] * 0.5;
    int case2 = prices[0] + prices[1] * 0.5 + prices[2] * 0.5 + prices[3];

    int min_price = min(case1, case2);
    cout << min_price << endl;

    return 0;
}
//9-8
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int count = 0;
    while (N > 0) {
        if (N % 2 == 0) {
            count++;
        }
        N /= 2;
    }

    cout << count << endl;

    return 0;
}
//9-9
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double N, M, P;
    cin >> N >> P >> M;
    int years = 0;
    while (N < M) {
        double interest = N * P / 100.0;
        N += interest;
        years++;
    }

    cout << round(years) << endl;

    return 0;
}
//9-10
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max_value = INT_MIN;
    int current_value;

    while (cin >> current_value) {
        if (current_value == 0) {
            break;
        }

        if (current_value > max_value) {
            max_value = current_value;
        }
    }

    cout << max_value << endl;

    return 0;
}
//9-11
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << "  ";
        }
        cout << "* ";
        for (int j = 1; j <= i - 2; j++) {
            cout << "+ ";
        }
        if (i >= 2) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            cout << "  ";
        }
        cout << "* ";
        for (int j = 1; j <= i - 2; j++) {
            cout << "+ ";
        }
        if (i >= 2) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
//9-12
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int S;
    cin >> S;

    int min_matchsticks = S;
    for (int a = 1; a <= sqrt(S); a++) {
        if (S % a == 0) {
            int b = S / a;
            int matchsticks = 2 * (a + b);
            min_matchsticks = min(min_matchsticks, matchsticks);
        }
    }

    cout << min_matchsticks << endl;

    return 0;
}
//9-13
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Введите значение N: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "+ ";
        }
        cout << endl;
    }

    return 0;
}

//9-14
#include <iostream>

int countTrailingZerosInFactorial(int N) {
    int count = 0;
    while (N >= 5) {
        N /= 5;
        count += N;
    }
    return count;
}

int main() {
    int N;
    std::cin >> N;

    int zeros = countTrailingZerosInFactorial(N);

    std::cout << zeros << std::endl;

    return 0;
}
//9-15
#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeapYear) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    int nextLeapYear = year;
    while (true) {
        nextLeapYear++;
        if ((nextLeapYear % 4 == 0 && nextLeapYear % 100 != 0) || (nextLeapYear % 400 == 0)) {
            break;
        }
    }

    cout << nextLeapYear << endl;

    return 0;
}

