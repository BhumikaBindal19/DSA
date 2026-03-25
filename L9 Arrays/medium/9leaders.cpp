#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> leaders(vector<int> &nums){

    //brute
    vector<int> leaders;
    int n= nums.size();
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j = i+1; j<n ; j++){
            if(nums[j]>nums[i]){
                flag=false;
                break;
            }
        }
        if(flag==true) leaders.push_back(nums[i]);
    }
    return leaders;

    //optimised
    // vector<int> leaders;
    // int maxi=INT_MIN , n= nums.size();
    // for(int i=n-1;i>=0;i--){
    //     if(nums[i]>maxi){
    //         leaders.push_back(nums[i]);
    //         maxi = nums[i];
    //     } 
    // }
    // return leaders;
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
    vector<int> ans= leaders(nums);
    for(int i: ans) cout<< i<< " ";
    return 0;
}