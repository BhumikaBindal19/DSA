#include <bits/stdc++.h>
using namespace std;


//floor
//largest index such that arr[i] <= x
//O(log n) time
//O(1) space

int floorValue(vector<int> arr, int x) {

    int n = arr.size();

    int low = 0, high = n - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] <= x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return high;
}


//ceil
//smallest index such that arr[i] >= x    //lower bound
//O(log n) time
//O(1) space

int ceilValue(vector<int> arr, int x) {

    int n = arr.size();

    int low = 0, high = n - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] >= x)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return low;
}


int main() {

    int n, x;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    int floorIndex = floorValue(arr, x);
    int ceilIndex = ceilValue(arr, x);

    cout << "Floor index: " << floorIndex << endl;

    if(floorIndex != -1)
        cout << "Floor value: " << arr[floorIndex] << endl;
    else
        cout << "Floor does not exist" << endl;


    cout << "Ceil index: " << ceilIndex << endl;

    if(ceilIndex != n)
        cout << "Ceil value: " << arr[ceilIndex] << endl;
    else
        cout << "Ceil does not exist" << endl;

    return 0;
}