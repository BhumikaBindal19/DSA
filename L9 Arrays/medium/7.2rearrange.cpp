#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> rearrange(vector<int> &nums){
    //brute
    vector<int> pos;
    vector<int> neg;
    for(int i: nums){
        if(i>0) pos.push_back(i);
        else neg.push_back(i);
    }
    for(int i = 0; i<min(pos.size(),neg.size());i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
    int j= 2*min(pos.size(),neg.size());
    for(int k= min(pos.size(),neg.size()) ; k<pos.size();k++){
        nums[j] = pos[k];
        j++;
    }
    for(int k= min(pos.size(),neg.size()) ; k<neg.size();k++){
        nums[j] = neg[k];
        j++;
    }
    return nums;

    // no optimal
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