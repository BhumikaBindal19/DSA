#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int stocks(vector<int> &nums){

    //brute
    // int maxp=0, p=0;
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         p=nums[j]-nums[i];
    //         if(p>maxp) maxp=p;
    //     }
    // }
    // return maxp;

    //optimised
    if(nums.size()==1) return 0;
    int profit=0, cost=0 , minp=nums[0];
    for(int i=0;i<nums.size();i++){
        cost= nums[i]-minp;
        // if(p>maxp) maxp=p;
        profit= max(profit,cost);
        // if(nums[i]<min) min=nums[i];
        minp= min(minp, nums[i]);
    }
    return profit;
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
    int ans= stocks(nums);
    cout<< ans;
    return 0;
}