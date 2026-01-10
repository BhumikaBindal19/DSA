#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int l= low+1;
    int r = high;
    while(l<=r){
        while(arr[l]<=pivot && l<=high){
            l++;
        }
        while(arr[r]>pivot && r>=low){
            r--;
        }
        if(l<r){
            int temp= arr[l];
            arr[l]= arr[r];
            arr[r]= temp;
        }
    }
    arr[low]= arr[r];
    arr[r] = pivot;
    return r;
}
void quick(int arr[],int low , int high){
    if(low>=high) return;
    int pivot = partition(arr,low,high);
    quick(arr, low , pivot-1);
    quick(arr,pivot+1, high);
}

int main(){
    int n;
    cin >> n ;
    int arr[n];
    cout <<"Before sorting: ";
    for(int i =0; i <n ; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }

    quick(arr, 0 , n-1);
    cout << "\nQuick Sort: ";
    for(int i =0;i<n; i++){
        cout<< arr[i] << " ";
    }

}