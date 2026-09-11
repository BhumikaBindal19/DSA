#include <iostream>
#include <vector>
using namespace std;


//before single elements the pairs are (even index , odd index) 
// after :- switched to (odd , even)


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        // If there is only one element,
        // that element is the answer.
        if (nums.size() == 1)
            return nums[0];

        // Check the first element separately.
        // If it is different from the second element,
        // then it is the single element.
        if (nums[0] != nums[1])
            return nums[0];

        // Check the last element separately.
        // If it is different from the second-last element,
        // then it is the single element.
        if (nums[n-1] != nums[n-2])
            return nums[n-1];

        // Search only the middle part of the array.
        int low = 1, high = nums.size() - 2;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // If mid is different from both neighbors,
            // then mid is the single element.
            if (nums[mid] != nums[mid-1] &&
                nums[mid] != nums[mid+1])
                return nums[mid];

            // If mid is even:
            // Normally, the pair should be (mid, mid+1).
            else if (mid % 2 == 0) {

                // Pair is correctly placed.
                // Therefore, the single element is on the right.
                if (nums[mid] == nums[mid+1])
                    low = mid + 1;

                // Pair is broken.
                // Therefore, the single element is on the left.
                else
                    high = mid - 1;
            }

            // If mid is odd:
            // Normally, the pair should be (mid-1, mid).
            else {

                // Pairing has shifted,
                // so the single element is on the left.
                if (nums[mid] == nums[mid+1])
                    high = mid - 1;

                // Pair is still following the normal pattern,
                // so the single element is on the right.
                else
                    low = mid + 1;
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;

    // Test case 1
    vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4};
    cout << "Single element: "
         << obj.singleNonDuplicate(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {1, 1, 2, 2, 3, 3, 4};
    cout << "Single element: "
         << obj.singleNonDuplicate(nums2) << endl;

    // Test case 3
    vector<int> nums3 = {1};
    cout << "Single element: "
         << obj.singleNonDuplicate(nums3) << endl;

    // Test case 4
    vector<int> nums4 = {1, 1, 2, 2, 3, 4, 4};
    cout << "Single element: "
         << obj.singleNonDuplicate(nums4) << endl;

    return 0;
}