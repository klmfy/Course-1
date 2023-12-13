//
// Created by Alexei Malik on 08.12.2023.
//

//1

#include <iostream>

using namespace std;

int main() {
    // Ввод количества элементов массива
    int N;
    cin >> N;

    // Ввод элементов массива
    int array[N];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    // Подсчет количества положительных элементов
    int countPositive = 0;
    for (int i = 0; i < N; ++i) {
        if (array[i] > 0) {
            ++countPositive;
        }
    }

    // Вывод результата
    cout << countPositive << endl;

    return 0;
}


//2

#include <iostream>

using namespace std;

int main() {
    // Ввод количества элементов массива
    int N;
    cin >> N;

    // Ввод элементов массива
    int array[N];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    // Поиск индекса первого минимального элемента
    int L = 0;
    for (int i = 1; i < N; ++i) {
        if (array[i] < array[L]) {
            L = i;
        }
    }

    // Поиск индекса последнего максимального элемента
    int R = N - 1;
    for (int i = N - 2; i >= 0; --i) {
        if (array[i] > array[R]) {
            R = i;
        }
    }

    // Сумма элементов между L и R включительно
    int sum = 0;
    int step = (L <= R) ? 1 : -1;
    for (int i = L; i != R + step; i += step) {
        sum += array[i];
    }

    // Вывод результата
    cout << sum << endl;

    return 0;
}


//6

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // Ввод количества достопримечательностей и длины отрезка за день
    int N, L;
    cin >> N >> L;

    // Ввод координат достопримечательностей
    vector<int> coordinates(N);
    for (int i = 0; i < N; ++i) {
        cin >> coordinates[i];
    }

    // Сортировка координат в порядке возрастания
    sort(coordinates.begin(), coordinates.end());
    // Нахождение максимального расстояния между достопримечательностями
    int max_distance = 0;
    for (int i = 0; i < N - 1; ++i) {
        int distance = coordinates[i + 1] - coordinates[i];
        max_distance = max(max_distance, distance);
        cout << distance << endl;
    }

    // Вычисление количества дней
    int days = ceil(static_cast<double>(max_distance + 1) / L);

    // Вывод результата
    cout << days << endl;

    return 0;
}


//7

#include <iostream>

using namespace std;

int main() {
    // Ввод количества элементов массива
    int N;
    cin >> N;

    // Ввод элементов массива
    int array[N];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    // Циклический сдвиг вправо
    int temp = array[N - 1]; // Сохраняем последний элемент
    for (int i = N - 1; i > 0; --i) {
        array[i] = array[i - 1]; // Сдвигаем элементы вправо
    }
    array[0] = temp; // Перемещаем сохраненный последний элемент на первую позицию

    // Вывод результата
    for (int i = 0; i < N; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}

//8

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    cout << input.length() << endl;

    return 0;
}


//9

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int digitCount(const string& input) {
    int count = 0;
    for (char c : input) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string stringWithoutDigits(const string& input) {
    string result;
    for (char c : input) {
        if (!isdigit(c)) {
            result += c;
        }
    }
    return result;
}

int longestNumbers(const string& input) {
    int longestNumber = 0;
    int currentNumber = 0;

    for (char c : input) {
        if (isdigit(c)) {
            currentNumber = currentNumber * 10 + (c - '0');
        } else {
            longestNumber = max(longestNumber, currentNumber);
            currentNumber = 0;
        }
    }
    longestNumber = max(longestNumber, currentNumber);

    int count = 1;
    while ((longestNumber /= 10) > 0) {
        count++;
    }

    return count;
}

int main() {
    string input;
    getline(cin, input);

    int countDigits = digitCount(input);
    string withoutDigits = stringWithoutDigits(input);
    int countLongestNumbers = longestNumbers(input);

    cout << countDigits << endl;
    cout << withoutDigits << endl;
    cout << countLongestNumbers << endl;

    return 0;
}

//10



