#include <bits/stdc++.h>
using namespace std;

void shiftleft(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0], next = 0;
    arr[0] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        next = arr[i];
        arr[i] = temp;
        temp = next;
    }
    cout << "array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main(){
    shiftleft();
    return 0;
}