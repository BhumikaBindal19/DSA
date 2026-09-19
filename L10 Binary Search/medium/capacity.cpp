#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
INTUITION:
- We need to find the minimum ship capacity that can ship all packages
  within 'days' days.
- The answer lies between:
      low  = maximum single package weight
      high = total weight of all packages
- This is a binary search on the answer.

CHECK FUNCTION:
- For a given capacity, simulate shipping packages in order.
- If adding a package exceeds the capacity, start a new day.
- Count how many days are required.
- If required days <= given days, this capacity is possible.
*/

bool check(vector<int>& weights, int days, int capacity) {
    int total = 0, sum = 0;

    for (int x : weights) {

        // Current package doesn't fit → start a new day
        if (sum + x > capacity) {
            total++;
            sum = x;
        }
        else {
            sum += x;
        }

        // Already need more than allowed days
        if (total > days)
            return false;
    }

    // Count the last day
    total++;

    return total <= days;
}

int shipWithinDays(vector<int>& weights, int days) {

    int sum = 0, low = 0;

    // Minimum possible capacity = largest package
    // Maximum possible capacity = sum of all packages
    for (int x : weights) {
        low = max(low, x);
        sum += x;
    }

    int high = sum;
    int ans = high;

    // Binary search for minimum valid capacity
    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (check(weights, days, mid)) {
            // Capacity works → try a smaller capacity
            ans = mid;
            high = mid - 1;
        }
        else {
            // Capacity doesn't work → need a larger capacity
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout << "Minimum capacity: "
         << shipWithinDays(weights, days) << endl;

    return 0;
}