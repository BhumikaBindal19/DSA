#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp= arr[mini];
        arr[mini]= arr[i];
        arr[i]= temp;
    }
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
    selection(arr, n);
    cout << "\nSelection Sort: ";
    for(int i =0;i<n; i++){
        cout<< arr[i] << " ";
    }

}