#include <bits/stdc++.h>
using namespace std;

int rotatedNo(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
    int ans = high;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        // If current range is already sorted,
        // low is the minimum in this range
        if(nums[low] <= nums[high]) {
            if(nums[low] < nums[ans]){
                ans = low;
            }
            break;
        }

        // Left half is sorted
        if(nums[low] <= nums[mid]) {
            if(nums[low] < nums[ans]){
                ans = low;
            }
            low = mid + 1;
        }
        // Right half is sorted
        else {
            if(nums[mid] < nums[ans]){
                ans = mid;
            }
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Rotation times: " << rotatedNo(nums) << endl;

    return 0;
}