#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int longestConsecutive(vector<int> &nums){

    //brute
    // bool linearsearch(int x, vector<int> &nums){
    //     for(int i : nums){
    //         if(i == x) return true;
    //     }
    //     return false;
    // }
    //
    // int n = nums.size();
    // if(n == 0) return 0;
    //
    // int longest = 1;
    //
    // for(int i = 0; i < n; i++){
    //     int count = 1;
    //     int x = nums[i] + 1;
    //
    //     while(linearsearch(x, nums)){
    //         x++;
    //         count++;
    //     }
    //
    //     longest = max(longest, count);
    // }
    //
    // return longest;


    //better
    // if(nums.size() == 0){
    //     return 0;
    // }
    //
    // sort(nums.begin(), nums.end());
    //
    // int longest = 1, len = 1;
    // int prev = nums[0];
    //
    // for(int i = 1; i < nums.size(); i++){
    //     if(prev != nums[i]){
    //
    //         if(prev + 1 == nums[i]){
    //             len++;
    //             longest = max(len, longest);
    //         }
    //         else{
    //             len = 1;
    //         }
    //
    //         prev = nums[i];
    //     }
    // }
    //
    // return longest;


    //optimized
    int longest = 0;

    unordered_set<int> s(nums.begin(), nums.end());

    for(int x : s){

        if(!s.count(x - 1)){

            int len = 0;

            while(s.count(x)){
                len++;
                x++;
            }

            longest = max(longest, len);
        }
    }

    return longest;
}


int main(){

    vector<int> nums;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int ans = longestConsecutive(nums);

    cout << ans;

    return 0;
}