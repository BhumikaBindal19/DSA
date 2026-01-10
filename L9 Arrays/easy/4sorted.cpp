#include <bits/stdc++.h>
using namespace std;

void sorted(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = true;
        }
    }
    if (!flag)
        cout << "sorted";
    else
        cout << "not sorted";
}

int main(){

    sorted();

}