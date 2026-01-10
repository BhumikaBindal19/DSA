#include <bits/stdc++.h>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n= nums.size();
    // map<int,int> mp;
    // vector<int> temp;
    // for(int i=0 ; i<n;i++){
    //     if(mp[nums[i]]==0) {
    //         temp.push_back(nums[i]);
    //         mp[nums[i]]++;
    //     }
    // }
    // for(int i = 0 ; i<temp.size();i++){
    //     nums[i]=temp[i];
    // }
    // return temp.size();
    
    // set<int> st;
    // for(int i=0;i<n;i++){
    //     st.insert(nums[i]);
    // }
    // int index =0;
    // for(auto it: st){
    //     nums[index] = it;
    //     index++;
    // }
    // return index;
    int unique = 0, check = 1;
    while(check<n){
        if(nums[check]!=nums[unique]){
            unique++;
            nums[unique]=nums[check];
        }
        check++;
    }
    return unique+1;
}