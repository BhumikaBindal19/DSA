#include <bits/stdc++.h>
using namespace std;

void linear_search(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;
    int flag=0;
    for(int i =0 ; i<n;i++){
        if(arr[i]==k){
            cout<<"Found.";
            flag =1;
        }
    }
    if(flag==0) cout<<"Not found.";
}

int main(){
    linear_search();
    return 0;
}