#include <bits/stdc++.h>
using namespace std;

// Returns:
// 1 -> mid^p == n
// 0 -> mid^p < n
// 2 -> mid^p > n
int power(int mid, int p, int n) {
    long long ans = 1;

    for (int i = 0; i < p; i++) {
        ans *= mid;

        if (ans > n)
            return 2;
    }

    if (ans == n)
        return 1;

    return 0;
}

int NthRoot(int p, int n) {
    int low = 1, high = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int midp = power(mid, p, n);

        if (midp == 1)
            return mid;

        else if (midp == 0)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int p, n;

    cin >> p >> n;

    cout << NthRoot(p, n) << endl;

    return 0;
}


//TC : p*log(n)
//Sc : O(1)
