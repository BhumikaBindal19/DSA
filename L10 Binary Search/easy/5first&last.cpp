#include <bits/stdc++.h>
using namespace std;


// ============================================================
// 1. LINEAR SEARCH
// ============================================================

// Idea:
// first = -1, last = -1
// Traverse the array once.
//
// If arr[i] == target:
//     if first == -1, set first = i
//     set last = i
//
// At the end:
//     return {first, last}
//
// Works for all cases, including target not found.
// If target is not found, both remain -1.
//
// O(n) time
// O(1) space

vector<int> searchRangeLinear(vector<int> arr, int target) {

    int first = -1, last = -1;

    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] == target) {

            if(first == -1)
                first = i;

            last = i;
        }
    }

    return {first, last};
}


// ============================================================
// 2. LOWER BOUND + UPPER BOUND
// ============================================================

// Example:
// arr = [4, 5, 5, 7, 8, 8, 8, 9, 10]
// target = 8
//
// lower bound = first index where arr[i] >= target
//             = 4
//
// upper bound = first index where arr[i] > target
//             = 7
//
// Therefore:
// first = lower bound
// last  = upper bound - 1
//
// Answer = {4, 6}
//
// IMPORTANT:
// If target does not exist, we cannot directly return lb, ub - 1.
//
// Example: target = 11
// lb = n, ub = n
//
// Example: target = 6
// lb = 3
//
// So check:
// if(lb == n || arr[lb] != target)
//     return {-1, -1};
//
// Otherwise:
// return {lb, ub - 1}
//
// O(log n) time
// O(1) space


int lowerBound(vector<int> arr, int target) {

    int n = arr.size();

    int low = 0, high = n - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] >= target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}


int upperBound(vector<int> arr, int target) {

    int n = arr.size();

    int low = 0, high = n - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}


vector<int> searchRangeBounds(vector<int> arr, int target) {

    int n = arr.size();

    int lb = lowerBound(arr, target);
    int ub = upperBound(arr, target);

    // Target does not exist
    if(lb == n || arr[lb] != target)
        return {-1, -1};

    return {lb, ub - 1};
}


// ============================================================
// 3. BINARY SEARCH — FIRST AND LAST OCCURRENCE
// ============================================================

// FIRST OCCURRENCE:
//
// If arr[mid] == target:
//     first = mid
//     continue searching LEFT
//     high = mid - 1
//
// If arr[mid] < target:
//     search RIGHT
//     low = mid + 1
//
// If arr[mid] > target:
//     search LEFT
//     high = mid - 1
//
//
//
// LAST OCCURRENCE:
//
// If arr[mid] == target:
//     last = mid
//     continue searching RIGHT
//     low = mid + 1
//
// If arr[mid] < target:
//     search RIGHT
//     low = mid + 1
//
// If arr[mid] > target:
//     search LEFT
//     high = mid - 1
//
//
//
// O(log n) time
// O(1) space


int firstOccurrence(vector<int> arr, int target) {

    int n = arr.size();

    int low = 0, high = n - 1;
    int first = -1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {

            first = mid;
            high = mid - 1;       // search LEFT
        }
        else if(arr[mid] < target) {

            low = mid + 1;        // search RIGHT
        }
        else {

            high = mid - 1;       // search LEFT
        }
    }

    return first;
}


int lastOccurrence(vector<int> arr, int target) {

    int n = arr.size();

    int low = 0, high = n - 1;
    int last = -1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {

            last = mid;
            low = mid + 1;        // search RIGHT
        }
        else if(arr[mid] < target) {

            low = mid + 1;        // search RIGHT
        }
        else {

            high = mid - 1;       // search LEFT
        }
    }

    return last;
}


vector<int> searchRangeBinary(vector<int> arr, int target) {

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    return {first, last};
}


// ============================================================
// MAIN
// ============================================================

int main() {

    int n, target;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;


    // 1. Linear Search
    vector<int> ans1 = searchRangeLinear(arr, target);

    cout << "Linear Search: "
         << ans1[0] << " " << ans1[1] << endl;


    // 2. Lower Bound + Upper Bound
    vector<int> ans2 = searchRangeBounds(arr, target);

    cout << "Lower + Upper Bound: "
         << ans2[0] << " " << ans2[1] << endl;


    // 3. Binary Search
    vector<int> ans3 = searchRangeBinary(arr, target);

    cout << "Binary Search: "
         << ans3[0] << " " << ans3[1] << endl;


    return 0;
}