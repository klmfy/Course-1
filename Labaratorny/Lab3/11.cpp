
bool IsPower(int N, int K) {
    if (N <= 0 || K <= 0) {
        return false;
    }

    if (N == 1) {
        return true;
    }

    if (N % K != 0) {
        return false;
    }

    int power = 0;
    int currentResult = 1;

    while (currentResult <= N / K && currentResult > 0) {
        currentResult *= K;
        power++;

        if (currentResult == N) {
            return true;
        }
    }

    return false;
}