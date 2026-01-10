#include <bits/stdc++.h>
using namespace std;

void rotate(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int temp[n];
    for(int i =0;i<n;i++){
        temp[(k+i)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    cout << "array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    rotate();
    return 0;
}