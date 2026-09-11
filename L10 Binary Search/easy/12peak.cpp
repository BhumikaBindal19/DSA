#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();

        // If there is only one element,
        // it is automatically a peak.
        if (nums.size() == 1) return 0;

        // Check the first element.
        // Its left neighbor is -infinity,
        // so we only need to check its right neighbor.
        if (nums[0] > nums[1]) return 0;

        // Check the last element.
        // Its right neighbor is -infinity,
        // so we only need to check its left neighbor.
        if (nums[n-1] > nums[n-2]) return n-1;

        // Search only the middle elements.
        int low = 1, high = n - 2;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // If mid is greater than both neighbors,
            // we found a peak.
            if (nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
                return mid;

            // We are on an increasing slope.
            // Therefore, a peak must exist on the right.
            else if (nums[mid-1] < nums[mid])
                low = mid + 1;

            // Otherwise, a peak must exist on the left.
            else
                high = mid - 1;
        }

        return -1;
    }
};

int main() {

    Solution obj;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Peak index: " << obj.findPeakElement(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {1, 2, 1, 3, 5, 6, 4};
    cout << "Peak index: " << obj.findPeakElement(nums2) << endl;

    // Test case 3: single element
    vector<int> nums3 = {5};
    cout << "Peak index: " << obj.findPeakElement(nums3) << endl;

    // Test case 4: peak at beginning
    vector<int> nums4 = {5, 4, 3, 2, 1};
    cout << "Peak index: " << obj.findPeakElement(nums4) << endl;

    // Test case 5: peak at end
    vector<int> nums5 = {1, 2, 3, 4, 5};
    cout << "Peak index: " << obj.findPeakElement(nums5) << endl;

    return 0;
}