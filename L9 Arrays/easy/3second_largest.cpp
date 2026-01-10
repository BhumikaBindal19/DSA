#include <bits/stdc++.h>
using namespace std;

void second_largest_element(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // brute force
    //  sort array
    //  store last element as largest
    // iterate from last and tell the second largest

    // better
    //  int largest = arr[0];
    //  for(int i =1; i<n;i++){
    //      if(arr[i]>largest) largest= arr[i];
    //  }
    //  int secondl = INT_MIN;
    //  for(int i = 0;i<n;i++){
    //      if(arr[i]>secondl && arr[i]!=largest){
    //          secondl= arr[i];
    //      }
    //  }

    // optimised
    int largest = arr[0];
    int secondl = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondl = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondl)
        {
            secondl = arr[i];
        }
    }

    cout << "largest: " << largest;
    cout << "\nSecond largest: " << secondl;
}

int main(){

    second_largest_element();
    return 0;
}