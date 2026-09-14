#include <bits/stdc++.h>
using namespace std;

// ============================================================
// 1. FIND INTEGER SQUARE ROOT USING LINEAR SEARCH
// ============================================================
// We need the largest integer x such that:
// x * x <= n
//
// for(i = 1; i*i <= n)
// This takes O(sqrt(n)) time.
// Binary Search can do the same thing in O(log n).
//

int sqrtLinear(int n) {

    int ans = 0;

    for(int i = 1; i * i <= n; i++) {
        ans = i;
    }

    return ans;
}

// ============================================================
// 2. INTEGER SQUARE ROOT USING BINARY SEARCH
// ============================================================
// low  = side where ANSWER IS POSSIBLE
// high = side where ANSWER IS NOT POSSIBLE
//
// n = 9
//
// 1  2  3  4  5  6  7  8  9  10  11  12  13  14
// .  .  .  .  .  .  .  .  .   -   -   -   -   -
// --------------------------|-------------------
// low   POSSIBLE            |  NOT POSSIBLE  high
//                         h | l
//
// low  crosses into the NOT-POSSIBLE side
// high crosses into the POSSIBLE side
// Therefore, high comes to the LAST POSSIBLE ANSWER.
// ------------------------------------------------------------


int sqrtBinary(int n) {

    int low = 1;
    int high = n;

    int ans = 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        // mid is POSSIBLE
        if(mid * mid <= n) {

            ans = mid;

            // Search for a bigger possible answer
            low = mid + 1;
        }

        // mid is NOT POSSIBLE
        else {

            // Move towards the possible side
            high = mid - 1;
        }
    }

    // ans also contains the answer.
    // high also ends at the last possible value.
    return high;
}



int main() {

    int n;

    cin >> n;

    cout << "Linear Search Answer: "
         << sqrtLinear(n) << endl;

    cout << "Binary Search Answer: "
         << sqrtBinary(n) << endl;

    return 0;
}