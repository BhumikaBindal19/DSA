#include <bits/stdc++.h>
using namespace std;


// Search in Rotated Sorted Array II
//
// Difference from the previous problem:
// Duplicates are allowed.
//
// Main problem:
// Sometimes we cannot identify which half is sorted.
//
// Example:
// [1, 0, 1, 1, 1]
//      ^     ^
//     low   high
//
// If nums[low] == nums[mid] == nums[high],
// we cannot tell which half is sorted.
//
// So remove the ambiguity:
//     low++;
//     high--;
//
// Otherwise, at least one half is definitely sorted.
//

// Main intuition:
// "Surety comes from sorting."
// But with duplicates, sometimes we cannot identify
// the sorted half, so shrink both ends.
//
// Average: O(log n)
// Worst case: O(n) because duplicates may force
// us to shrink one element from each side.
//
// Space: O(1)


class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int low = 0, high = nums.size() - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] == target)
                return true;


            // Cannot identify the sorted half
            if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            }


            // Left half is sorted
            else if(nums[low] <= nums[mid]) {

                if(nums[low] <= target && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }


            // Right half is sorted
            else {

                if(nums[mid] < target && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return false;
    }
};