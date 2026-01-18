#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int max_element(vector<int> &nums){

    //brute
    // int maxe=nums[0] ,maxcount =0 , count =0;
    // for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<nums.size();j++){
    //         if (nums[i]==nums[j]) count++;
    //     }
    //     if (count>maxcount){
    //         maxe= nums[i];
    //         maxcount= count;
    //     }
    //     count=0;
    // }
    // return maxe;


    //brute(optimised)
    // int count =0;
    // for(int i=0;i<nums.size();i++){
    //     count=0;
    //     for(int j=0;j<nums.size();j++){
    //         if (nums[i]==nums[j]) count++;
    //     }
    //     if (count>(nums.size()/2)){
    //         return nums[i];
    //     }
    // }
    // return -1;


    //better
    // unordered_map<int,int> m;
    // for(int i : nums){
    //     m[i]++;
    // }  
    // int maxf = -1, maxe = nums[0] ;
    // for(auto it : m){
    //     if(it.second>maxf){
    //         maxf= it.second;
    //         maxe= it.first;
    //     }
    // }
    // return maxe;

    //optimal- Moore Voting Algo
    int maxe= nums[0], count=0;
    for(int i : nums){
        if(count==0) maxe= i;
        if(maxe==i) count++;
        else count--;
    }
    return maxe;
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
    int ans= max_element(nums);
    cout<< ans ;
    return 0;
}