#include <bits/stdc++.h>
using namespace std;


//lowerbound
//lowest possible index such that arr[i] >= x
//O(log n) time
//O(1) space

int lowerbound(vector<int> arr, int x) {

    int n = arr.size();

    int low = 0, high = n - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] >= x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}


//upperbound
//lowest possible index such that arr[i] > x
//O(log n) time
//O(1) space

int upperbound(vector<int> arr, int x) {

    int n = arr.size();

    int low = 0, high = n - 1;
    int ans = n;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] > x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}


int main() {

    int n, x;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;


    //manual lower bound
    cout << "Lower Bound: "
         << lowerbound(arr, x) << endl;


    //manual upper bound
    cout << "Upper Bound: "
         << upperbound(arr, x) << endl;


    //STL lower_bound
    auto lb = lower_bound(arr.begin(), arr.end(), x);

    int lowerIndex = lb - arr.begin();

    cout << "STL Lower Bound: "
         << lowerIndex << endl;


    //STL upper_bound
    auto ub = upper_bound(arr.begin(), arr.end(), x);

    int upperIndex = ub - arr.begin();

    cout << "STL Upper Bound: "
         << upperIndex << endl;


    return 0;
}