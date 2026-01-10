#include <bits/stdc++.h>
using namespace std;

void missing_number(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //brute force
    // cout<< "Missing number: ";
    // for(int i=0;i<=n;i++){
    //     int flag = 0;
    //     for(int j=0;j<n;j++){
    //         if (arr[j]==i){
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if (flag==0){
    //         cout<< i ;
    //         break;
    //     }
    // }

    //better
    // map<int,int> missing;
    // // for (int i = 0; i <= n; i++){
    // //     missing[i]=0;
    // // } not needed
    // for (int i = 0; i < n; i++){
    //     missing[arr[i]]=1;
    // }
    // cout<< "Missing number: ";
    // // for(auto it: missing){
    // //     if(it.second==0) cout<< it.first;
    // // }
    // for(int i=0;i<=n;i++){
    //     if(missing[i]==0){
    //         cout<< i;
    //         break;
    //     }
    // }

    //optimal - sum
    // int sum = n*(n+1)/2;
    // int nums_sum=0;
    // for(int i =0 ; i<n;i++){
    //     nums_sum+= arr[i];
    // }
    // cout<< "Missing no: "<< sum-nums_sum;

    //optimal - xor 
    int xor1= 0, xor2=0;
    for(int i=0;i<n;i++){
        xor1^=i;
        xor2^=arr[i];
    }
    xor1^=n;
    int num = xor1^xor2;
    cout<< "Missing no: "<< num;
}

int main(){
    missing_number();
    return 0;
}