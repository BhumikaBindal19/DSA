#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> sort_colors(vector<int> &nums){

    //brute
    //merge sort in nlong TC and n SC


    //better
    // int count0=0 , count1=0, count2=0;
    // for(int i : nums){
    //     if (i==0) count0++;
    //     else if( i==1) count1++;
    //     else count2++;
    // }
    // int j=0;
    // while(j<count0){
    //     nums[j]=0;
    //     j++;
    // }
    // while(j<(count0+count1)){
    //     nums[j]=1;
    //     j++;
    // }
    // while(j<(count0+count1+count2)){
    //     nums[j]=2;
    //     j++;
    // }

    //optimal- Dutch National flag Algo
    int low=0, mid=0, high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0) swap(nums[low++],nums[mid++]);
        else if(nums[mid]==1) mid++;
        else swap(nums[mid],nums[high--]);
    }
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
    vector<int> ans= sort_colors(nums);
    cout<< ans[0] << "," << ans[1] ;
    return 0;
}