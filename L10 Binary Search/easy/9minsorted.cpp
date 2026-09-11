#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    int ans = nums[low];

    while(low <= high) {
        int mid = low + (high - low) / 2;

        // If current range is already sorted,
        // low is the minimum in this range
        if(nums[low] <= nums[high]) {
            ans = min(ans , nums[low]);
            break;
        }

        // Left half is sorted
        if(nums[low] <= nums[mid]) {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        // Right half is sorted
        else {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Minimum element: " << findMin(nums) << endl;

    return 0;
}