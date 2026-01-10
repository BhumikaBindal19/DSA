#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    // vector<int> temp;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]!=0) temp.push_back(nums[i]);
    // }
    // for(int i=0;i<nums.size();i++){
    //     if(i<temp.size()) nums[i]=temp[i];
    //     else nums[i]=0;
    // }
    // int n=nums.size();
    // int nonzero=0;
    // for(int i=0;i<n;i++){
    //     if(nums[i]!=0){
    //         nums[nonzero]=nums[i];
    //         nonzero++;
    //     }
    // }
    // for(int i=nonzero;i<n;i++){
    //     nums[i]=0;
    // }
    int n=nums.size();
    int nonzero=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[nonzero]=nums[i];
            if(nonzero!=i) nums[i]=0;
            nonzero++;
        }
    }
}