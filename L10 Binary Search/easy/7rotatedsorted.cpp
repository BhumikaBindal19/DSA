#include <bits/stdc++.h>
using namespace std;


// ============================================================
// SEARCH IN ROTATED SORTED ARRAY
// ============================================================

// Normal binary search works because the ENTIRE array is sorted.
//
// In a rotated sorted array, the entire array is not sorted.
//
// Example:
// [7, 8, 9, 1, 2, 3, 4, 5, 6]
//
// So if nums[mid] < target, we CANNOT blindly say:
// "search right"
//
// Why?
// Because the array is not entirely sorted.
//
// KEY IDEA:
// At least ONE half of the array is always sorted.
//
// Identify the sorted half using:
// low, mid and high.
//
// Then check whether the target lies inside that sorted half.
//
// If it does → search that half.
// If it doesn't → search the other half.
//
// O(log n) time
// O(1) space


int search(vector<int> nums, int target) {

    int low = 0, high = nums.size() - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        // Target found
        if(nums[mid] == target)
            return mid;


        // ----------------------------------------------------
        // LEFT HALF IS SORTED
        // ----------------------------------------------------

        if(nums[low] <= nums[mid]) {

            // Target lies inside the sorted left half
            if(nums[low] <= target && target <= nums[mid])
                high = mid - 1;

            // Target is in the other half
            else
                low = mid + 1;
        }


        // ----------------------------------------------------
        // RIGHT HALF IS SORTED
        // ----------------------------------------------------

        else {

            // Target lies inside the sorted right half
            if(nums[mid] <= target && target <= nums[high])
                low = mid + 1;

            // Target is in the other half
            else
                high = mid - 1;
        }
    }

    return -1;
}


int main() {

    int n, target;

    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> target;

    cout << search(nums, target);

    return 0;
}