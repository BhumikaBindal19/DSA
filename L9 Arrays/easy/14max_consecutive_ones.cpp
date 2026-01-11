// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi = 0, count=0;
    int n = nums.size();
    for(int i=0;i<n ; i++){
        if(nums[i]==1){
            count++;
            maxi= max(maxi,count);
        }
        else{count=0;}
        // if(maxi<count) maxi=count;
    }
    return maxi;
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
    cout<< findMaxConsecutiveOnes(nums);
    return 0;
}