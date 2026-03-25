#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> rearrange(vector<int> &nums){
    //brute
    // vector<int> pos;
    // vector<int> neg;
    // for(int i: nums){
    //     if(i>0) pos.push_back(i);
    //     else neg.push_back(i);
    // }
    // // int j=0;
    // // for(int i = 0; i<nums.size();i+=2){
    // //     nums[i]=pos[j];
    // //     nums[i+1]=neg[j];
    // //     j++;
    // // }
    // for(int i = 0; i<nums.size()/2;i++){
    //     nums[2*i]=pos[i];
    //     nums[2*i+1]=neg[i];
    // }
    // return nums;

    // optimal
    int n= nums.size();
    vector<int> ans(n,0);
    int pos=0,neg=1;
    for(int i: nums){
        if(i >0){
            ans[pos]= i;
            pos+=2;
        }
        else{
            ans[neg]= i;
            neg+=2;
        }
    }
    return ans;
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
    vector<int> ans= rearrange(nums);
    for(int i: nums) cout<< i<< " ";
    return 0;
}