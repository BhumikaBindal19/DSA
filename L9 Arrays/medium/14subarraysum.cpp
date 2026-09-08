#include <bits/stdc++.h>
using namespace std;

//brute
// O(n^3) time
// O(1) space
/*
int subarraySum(vector<int>& nums, int k) {

    int total = 0;

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i; j < nums.size(); j++) {

            int sum = 0;

            for(int x = i; x <= j; x++) {
                sum += nums[x];
            }

            if(sum == k)
                total++;
        }
    }

    return total;
}
*/

//better
// O(n^2) time
// O(1) space
/*
int subarraySum(vector<int>& nums, int k) {

    int total = 0;

    for(int i = 0; i < nums.size(); i++) {

        int sum = 0;

        for(int j = i; j < nums.size(); j++) {

            sum += nums[j];

            if(sum == k)
                total++;
        }
    }

    return total;
}
*/

//optimized
// O(n) average time
// O(n) space
int subarraySum(vector<int>& nums, int k) {

    unordered_map<int, int> freq;

    freq[0] = 1;

    int total = 0;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++) {

        sum += nums[i];

        if(freq.find(sum - k) != freq.end())
            total += freq[sum - k];

        freq[sum]++;
    }

    return total;
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << subarraySum(nums, k);

    return 0;
}