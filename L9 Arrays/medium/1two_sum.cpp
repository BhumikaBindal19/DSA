#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){

    //brute
    // for(int i=0; i < nums.size() ; i++){
    //     for(int j=i+1; j< nums.size() ; j++){
    //         if(nums[i]+nums[j]==target)
    //              return {i,j};
    //     }
    // }
    // return {};

    //optimal
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (m.find(rem) != m.end())
            return {i, m[rem]};
        m[nums[i]] = i;
    }
    return {};

    //if without map- only found/not found - then sorting + 2 pointers can also be done
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
    int target;
    cin>> target;
    vector<int> ans= twoSum(nums,target);
    cout<< ans[0] << "," << ans[1] ;
    return 0;
}