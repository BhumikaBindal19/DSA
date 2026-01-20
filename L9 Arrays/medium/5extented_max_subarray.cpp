#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> ex_max_subarray(vector<int> &nums){
    int start=0, end=0;
    int msum =nums[0], sum=0;
    for(int i=0 ;i<nums.size();i++){
        if(sum==0) start=i;
        sum+=nums[i];
        if(sum>msum){
            msum=sum;
            end=i;
        }
        if(sum<0) sum=0;
    }
    return {start,end};
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
    vector<int> ans= ex_max_subarray(nums);
    cout<< ans[0] << "," << ans[1] ;
    return 0;
}