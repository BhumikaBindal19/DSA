#include <bits/stdc++.h>
using namespace std;

void demoarray(){
    int arr[5] = {2, 3};

    int n = sizeof(arr) / sizeof(arr[0]); // size of array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arr2[5]; // make it globally
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}

int main(){
    demoarray();
    return 0;
}