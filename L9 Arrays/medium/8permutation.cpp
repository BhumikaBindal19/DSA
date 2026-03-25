#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int> &nums){
    //brute
    

    // optimal
    int n= nums.size(), index = -1;

    for(int i = n-2 ; i>=0 ;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1 ){
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i = n-1;i> index ; i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin() + index +1 , nums.end());
}

int main(){
    vector<int> nums;
    int n;
    cin>> n;
    for(int i=0; i<n;i++){
        int x; 
        cin >> x;
        nums.push_back(x);
    }
    permutation(nums);
    for(int i: nums) cout<< i<< " ";
    return 0;
}