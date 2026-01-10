#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void rec_insertion(int arr[],int i,int n){
    if(i==n) return;
    int j=i-1;
    int key = arr[i];
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    rec_insertion(arr,i+1,n);
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
    // selection(arr, n);
    // cout << "\nSelection Sort: ";
    // for(int i =0;i<n; i++){
    //     cout<< arr[i] << " ";
    // }

    // bubble(arr, n);
    // cout << "\nBubble Sort: ";
    // for(int i =0;i<n; i++){
    //     cout<< arr[i] << " ";
    // }

    // rec_bubble(arr, n);
    // cout << "\nRecursive Bubble Sort: ";
    // for(int i =0;i<n; i++){
    //     cout<< arr[i] << " ";
    // }

    insertion(arr, n);
    cout << "\nInsertion Sort: ";
    for(int i =0;i<n; i++){
        cout<< arr[i] << " ";
    }

    rec_insertion(arr, 1 ,n);
    cout << "\nRecursive Insertion Sort: ";
    for(int i =0;i<n; i++){
        cout<< arr[i] << " ";
    }

}