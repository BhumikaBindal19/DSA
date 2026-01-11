// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    // brute force : flag or count(more simple)
    for(int i=0;i<n;i++){
        bool flag = 0;
        for(int j=0 ; j<n ; j++){
            if(j!=i and nums[j]==nums[i]) flag=1;
        }
        // cout << nums[i] << " "<< flag << endl;
        if(flag==0){
            return nums[i];
        }
    }
    // for(int i=0;i<n;i++){
    //     bool count = 0;
    //     for(int j=0 ; j<n ; j++){
    //         if(nums[j]==nums[i]) count++;
    //     }
    //     if(count==1){
    //         return nums[i];
    //     }
    // }

    // map<int,int> m;
    // for(int i =0;i<n;i++){
    //     m[nums[i]]++;
    // }
    // int once=0;
    // for(auto it: m){
    //     // cout<< it.first << " " << it.second<< endl;
    //     if(it.second==1) once=it.first;
    // }
    // return once;

    // int once= 0;
    // for(int i=0; i<n;i++){
    //     once^=nums[i];
    // }
    // return once;

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
    cout<< singleNumber(nums);
    return 0;
}