#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    int m = matrix.size(), n = matrix[0].size();
    vector<int> spiral;

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while(top <= bottom && left <= right) {

        // left -> right
        for(int j = left; j <= right; j++)
            spiral.push_back(matrix[top][j]);
        top++;

        // top -> bottom
        for(int i = top; i <= bottom; i++)
            spiral.push_back(matrix[i][right]);
        right--;

        // right -> left
        if(top <= bottom) {
            for(int j = right; j >= left; j--)
                spiral.push_back(matrix[bottom][j]);
            bottom--;
        }

        // bottom -> top
        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                spiral.push_back(matrix[i][left]);
            left++;
        }
    }

    return spiral;
}

int main() {

    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}