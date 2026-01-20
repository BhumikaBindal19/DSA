#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int maximum_subarray(vector<int> &nums){

    //brute
    // int sum =0 , msum = nums[0];
    // for(int i= 0; i< nums.size();i++){
    //     for(int j=i; j<nums.size(); j++){
    //         sum=0;
    //         for(int k = i; k<=j ; k++ ){
    //             sum+=nums[k];
    //             if (sum>msum) msum = sum;
    //         }
    //     }
    // } 
    // return msum;


    //better
    // int sum =0 , msum = nums[0];
    // for(int i= 0; i< nums.size();i++){
    //     sum=0;
    //     for(int j=i; j<nums.size(); j++){
    //         sum+=nums[j];
    //         if(sum>msum) msum=sum;
    //     }
    // } 
    // return msum;

    //optimal- kadane's Algo
    int msum =nums[0], sum=0;
    for(int i=0 ;i<nums.size();i++){
        sum+=nums[i];
        if(sum>msum) msum=sum;
        if(sum<0) sum=0;
    }
    return msum;
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
    int ans= maximum_subarray(nums);
    cout<< ans ;
    return 0;
}