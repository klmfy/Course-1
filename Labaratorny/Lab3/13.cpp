#include <iostream>

using namespace std;

int CountMultiples(int a, int b) {
    if (a <= 0 && b <= 0) {
        return (b / 12) - (a / 12);
    } else if (a <= 0) {
        return b / 12 - (a / 12) + 1;
    } else if (b <= 0) {
        return (b / 12) + a / 12 + 1;
    } else {
        return b / 12 - a / 12;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = CountMultiples(a, b);
    cout << result << endl;

    return 0;
}

//int CountMultiples(int a, int b) {
//    if (a < 0 && b < 0) {
//        if (a < b) {
//            int count = ((a/12)*-1) - ((b/12)*-1);
//            return count;
//        } else if (a > b) {
//            int count = ((b/12)*-1) - ((a/12)*-1);
//            return count;
//        } else {
//            return (a/12)*-1;
//        }
//    }else if (a < 0) {
//        int count = b/12 + ((a/12)*-1) + 1;
//        return count;
//    } else if (b < 0) {
//        int count = ((b/12)*-1) + a/12 + 1;
//        return count;
//    }else {
//        if (a < b) {
//            int count = b/12 - a/12;
//            return count;
//        } else if (a > b) {
//            int count = a/12 - b/12;
//            if (b == 0) {
//                return count+1;
//            }
//            else {
//                return count;
//            }
//        } else {
//            return a/12-b/12+1;
//        }
//    }
//}
