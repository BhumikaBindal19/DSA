#include <bits/stdc++.h>
using namespace std;

//iterative
// O(log n) time
// O(1) space

int searchIterative(vector<int>& nums, int target) {

    int n = nums.size();

    int left = 0, right = n - 1;

    while(left <= right) {

        int mid = right - (right - left) / 2;

        if(nums[mid] == target)
            return mid;

        else if(nums[mid] > target)
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1;
}


//recursion
// O(log n) time
// O(log n) space

int binarySearch(vector<int>& nums, int left, int right, int target) {

    if(left > right)
        return -1;

    int mid = right - (right - left) / 2;

    if(nums[mid] == target)
        return mid;

    else if(nums[mid] > target)
        return binarySearch(nums, left, mid - 1, target);

    else
        return binarySearch(nums, mid + 1, right, target);
}

int searchRecursive(vector<int>& nums, int target) {

    return binarySearch(nums, 0, nums.size() - 1, target);
}


int main() {

    int n, target;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    //iterative
    cout << "Iterative: "
         << searchIterative(nums, target) << endl;

    //recursive
    cout << "Recursive: "
         << searchRecursive(nums, target) << endl;

    return 0;
}