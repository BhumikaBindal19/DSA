#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix) {

    //brute
    // O(n^2) time
    // O(n^2) space

    // int n = matrix.size();

    // vector<vector<int>> rotated(n, vector<int>(n));

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         rotated[j][n-i-1] = matrix[i][j];
    //     }
    // }

    // matrix = rotated;


    //optimal
    // O(n^2) time
    // O(1) space

    int n = matrix.size();

    //transpose
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //reverse
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }
}


int main(){

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}