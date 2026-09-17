#include <bits/stdc++.h>
using namespace std;

/*
Intuition:
- I need the smallest divisor such that the sum of all rounded-up
  divisions is <= threshold.
- For a fixed divisor, I can directly calculate this sum.
- As the divisor increases, the sum decreases, so once a divisor
  works, all larger divisors will also work.
- Therefore, I can search for the first divisor that satisfies
  the condition instead of checking every divisor.
- The answer must lie between 1 and the maximum element.
*/

class Solution {
public:
    bool check(vector<int>& nums, int threshold , int div){
        long long sum = 0;
        for(int x : nums){
            int ans = (x + div - 1) / div;
            sum+=ans;
            if(sum>threshold) return false;
        }

        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1 , high = nums[0];
        for(int x : nums){
            high = max(high,x);
        }

        int ans = high;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(check(nums , threshold , mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << sol.smallestDivisor(nums, threshold) << endl;

    return 0;
}