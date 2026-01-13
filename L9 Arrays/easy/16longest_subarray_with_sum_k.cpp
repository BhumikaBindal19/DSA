#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int longest_subarrray(vector<int>& nums,int k) {
    int n = nums.size();

    //optimised bruteforce
    // int maxi=0;
    // for(int i=0;i<n;i++){
    //     int length = 0 , sum = 0;
    //     for(int j=i; j<n;j++){
    //         sum+=nums[j];
    //         if(sum<=k) length++;
    //         else break;
    //     }
    //     maxi=max(maxi,length);
    // }
    // return maxi;

    //better (optimal if negatives are also there)
    // int sum=0,length=0;
    // map<int,int> prefixsum;
    // prefixsum[0] = -1; 
    // for(int i=0;i<n;i++){
    //     sum+=nums[i];
    //     //this
    //     // if(sum==k){
    //     //     length= max(length,i+1);
    //     // }
    //     if(prefixsum.find(sum)==prefixsum.end()){
    //         prefixsum[sum]=i;
    //     }
    //     if(prefixsum.find(sum-k)!=prefixsum.end()){
    //         length= max(length,i-prefixsum[sum-k]);
    //     }
    // }
    // return length;

    //optimal(+ves ) using 2 pointer
    int sum=0 , maxlen =0;
    int i=0,j=0;
    while(j<n){
        sum+=nums[j];
        if (sum>k){
            while(sum>k && i<=j){
                sum-=nums[i];
                i++;
            }
        }
        else if (sum==k){
            maxlen= max(maxlen,j-i+1);
        }
        j++;
    }
    return maxlen;
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
    int k;
    cin >> k;
    cout<< longest_subarrray(nums,k);
    return 0;
}