//1
#include <iostream>

using namespace std;

int main() {
    // Чтение входных данных
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Подсчет положительных элементов
    int count_positive = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] > 0) {
            count_positive++;
        }
    }

    // Вывод результата
    cout << count_positive << endl;

    return 0;
}

//2

#include <iostream>

using namespace std;

int main() {
    // Чтение входных данных
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Находим индекс первого минимального элемента
    int min_index = 0;
    for (int i = 1; i < N; ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }

    // Находим индекс последнего максимального элемента
    int max_index = 0;
    for (int i = 1; i < N; ++i) {
        if (arr[i] >= arr[max_index]) {
            max_index = i;
        }
    }

    // Определяем границы L и R
    int L = min(min_index, max_index);
    int R = max(min_index, max_index);

    // Суммируем элементы между L и R
    int sum = 0;
    for (int i = L; i <= R; ++i) {
        sum += arr[i];
    }

    // Вывод результата
    cout << sum << endl;

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
        cout << "*";
        if (i >= 2) {
            cout << " ";
        }
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
        cout << "*";
        if (i >= 2) {
            cout << " ";
        }
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
//9-13

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
