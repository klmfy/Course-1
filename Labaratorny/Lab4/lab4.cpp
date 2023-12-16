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
//3
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Чтение входных данных
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Вывод чётных элементов
    for (int i = 0; i < N; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    // Вывод нечётных элементов
    for (int i = 0; i < N; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
//4
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> array(N);

    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    vector<int> sortedArray = array;
    sort(sortedArray.begin(), sortedArray.end());

    int originalFirstElement = array[0];
    auto it = find(sortedArray.begin(), sortedArray.end(), originalFirstElement);

    if (it != sortedArray.end()) {
        int indexInSortedArray = distance(sortedArray.begin(), it);
        cout << indexInSortedArray << endl;
    } else {
        cerr << "Ошибка: элемент не найден в отсортированном массиве." << endl;
    }

    return 0;
}

