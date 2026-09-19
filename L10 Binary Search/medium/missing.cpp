#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
============================================================
Kth Missing Positive Number
Example: arr = [2,3,4,7,11], k = 5
Missing numbers = 1,5,6,8,9,...
Answer = 9
============================================================


BRUTE FORCE INTUITION:
- Check positive numbers one by one: 1,2,3,4,...
- If a number is not in arr, it is missing.
- Keep counting missing numbers until we reach k.


OPTIMIZED INTUITION:
- Instead of checking every number, use binary search.
- For arr[mid], find how many numbers are missing before it.
- If there were no missing numbers, index mid would contain mid+1.
- So:

      missing = actual value - expected value
              = arr[mid] - (mid + 1)

- If missing < k:
      We have not reached the kth missing number yet.
      Go right.

- If missing >= k:
      We already have k missing numbers.
      The answer may be here or on the left.
      Go left.

- After binary search, low is the first position where
  enough missing numbers exist.

- The kth missing number is:

      k + low

  because k is the position we want, and low accounts for
  the shift caused by the missing numbers.
*/


// ============================================================
// BRUTE FORCE
// ============================================================

int bruteForce(vector<int>& arr, int k) {

    unordered_set<int> present(arr.begin(), arr.end());

    int missingCount = 0;

    for (int num = 1; ; num++) {

        // Number is missing if it is not present in arr
        if (!present.count(num)) {

            missingCount++;

            if (missingCount == k)
                return num;
        }
    }
}


// ============================================================
// OPTIMIZED - BINARY SEARCH
// ============================================================

int optimal(vector<int>& arr, int k) {

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        // Expected value at index mid if nothing was missing
        // Difference tells us how many numbers are missing
        int missing = arr[mid] - (mid + 1);

        if (missing < k) {
            // Not enough missing numbers -> go right
            low = mid + 1;
        }
        else {
            // Enough missing numbers -> go left
            high = mid - 1;
        }
    }

    // low = position where kth missing number falls
    return low + k;
}


// ============================================================
// MAIN
// ============================================================

int main() {

    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    cout << "Brute Force: "
         << bruteForce(arr, k) << endl;

    cout << "Optimized: "
         << optimal(arr, k) << endl;

    return 0;
}