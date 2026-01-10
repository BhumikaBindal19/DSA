#include <bits/stdc++.h>
using namespace std;

void intersection_arr(){
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    int intersection[n<m?n:m];
    int k=0;
    //brute force
    // int visited[m]={0};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr1[i]==arr2[j] && visited[j]==0){
    //             intersection[k]=arr1[i];
    //             visited[j]=1;
    //             k++;
    //             break;
    //         }
    //         else if(arr1[i]<arr2[j]){
    //             break;
    //         }
    //     }
    // }

    //optimised
    int j=0,i=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            intersection[k]=arr1[i];
            k++;
            j++;
            i++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout << "Intersection: ";
    for (int it=0; it<k;it++){
        cout << intersection[it] << " ";
    }
}

int main(){
    intersection_arr();
    return 0;
}