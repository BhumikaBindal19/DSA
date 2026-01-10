#include <bits/stdc++.h>
using namespace std;

void largest_element(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // brute force
    //  sort array and return the last index element

    // optimized
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    cout << "largest: " << largest;
}

int main(){
    largest_element();
    return 0;
}