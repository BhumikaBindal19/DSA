#include <bits/stdc++.h>
using namespace std;

void union_arr(){
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    //brute force
    // set<int> union_set;
    // for(int i=0 ;i< n;i++){
    //     union_set.insert(arr1[i]);
    // }
    // for(int i=0 ;i< m;i++){
    //     union_set.insert(arr2[i]);
    // }

    //optimised
    int union_set[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(k==0 || arr1[i]!=union_set[k-1]){
                union_set[k]= arr1[i];
                k++;
            }
            i++;
        }
        else{
            if(k==0 || arr2[j]!=union_set[k-1]){
                union_set[k]=arr2[j];
                k++;
            }
            j++;
        }
    }
    while(i<n){
        if(k==0 || arr1[i]!=union_set[k-1]){
            union_set[k]= arr1[i];
            k++;
        }
        i++;
    }
    while(j<m){
        if(k==0 || arr2[j]!=union_set[k-1]){
            union_set[k]= arr2[j];
            k++;
        }
        j++;
    }

    cout << "Union: ";
    for (int it=0; it<k;it++){
        cout << union_set[it] << " ";
    }
}

int main(){
    union_arr();
    return 0;
}