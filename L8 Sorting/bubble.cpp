#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swap = false;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                swap = true;
            }
        }
        if(!swap) break;
    }
}
void rec_bubble(int arr[],int n){
    if(n==1) return ;
    bool swap= false;
    for(int i =0;i< n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp= arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap = true;
        }
    }
    if(!swap) return;
    rec_bubble(arr,n-1);
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

    bubble(arr, n);
    cout << "\nBubble Sort: ";
    for(int i =0;i<n; i++){
        cout<< arr[i] << " ";
    }

    rec_bubble(arr, n);
    cout << "\nRecursive Bubble Sort: ";
    for(int i =0;i<n; i++){
        cout<< arr[i] << " ";
    }

}