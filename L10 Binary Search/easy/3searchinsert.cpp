#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {

    //lower_bound code
        int n = nums.size();
        int low = 0 , high = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]>=target) high = mid-1;
            else low = mid+1;
        }

        return low;
}

int main() {

    int n, target;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    cout << searchInsert(nums, target);

    return 0;
}