#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[],int n){
    for(int j =0;j<n;j++){
        cout<< arr[j];
    }
}
void revarr(int i , int n ,int arr[]){
    if (n/2<i) return;
    // swap(arr[i],arr[n-1-i])
    int a=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=a;
    revarr(i+1,n,arr);
}
void revarr2(int l , int r , int arr[]){
    if(l>r) return;
    swap(arr[l],arr[r]);
    revarr2(l+1,r-1,arr);
}

int main(){
    int arr[]= {0,1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< n;
    revarr(0 , n, arr);
    revarr2(0 , n-1 , arr);
    printarr(arr,n);

}
