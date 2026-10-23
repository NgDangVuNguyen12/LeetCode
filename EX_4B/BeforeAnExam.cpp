
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int d, sumTime;
    cin >> d >> sumTime;

    int minTime[30], maxTime[30];
    int minSum = 0, maxSum = 0;

    for (int i = 0; i < d; i++) {
        cin >> minTime[i] >> maxTime[i];
        minSum += minTime[i];
        maxSum += maxTime[i];
    }

    if (sumTime < minSum || sumTime > maxSum) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    int remaining = sumTime - minSum;

    for (int i = 0; i < d; i++) {
        int time = minTime[i];

        int diff = min(maxTime[i] - minTime[i], remaining);

        time += diff;
        remaining -= diff;

        cout << time << " ";
    }

    return 0;
}
