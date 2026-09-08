#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix){

    //brute
    // O(n^3)


    //better
    // int m = matrix.size(), n = matrix[0].size();
    //
    // vector<int> rows(m, 0);
    // vector<int> cols(n, 0);
    //
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         if(matrix[i][j] == 0){
    //             rows[i] = 1;
    //             cols[j] = 1;
    //         }
    //     }
    // }
    //
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         if(rows[i] || cols[j]){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }


    //optimized
    int m = matrix.size(), n = matrix[0].size();

    int col0 = 1;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            if(matrix[i][j] == 0){

                matrix[i][0] = 0;

                if(j == 0)
                    col0 = 0;
                else
                    matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){

            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    //first row must be handled before first column
    if(matrix[0][0] == 0){
        for(int j = 0; j < n; j++){
            matrix[0][j] = 0;
        }
    }

    if(col0 == 0){
        for(int i = 0; i < m; i++){
            matrix[i][0] = 0;
        }
    }
}


int main(){

    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}