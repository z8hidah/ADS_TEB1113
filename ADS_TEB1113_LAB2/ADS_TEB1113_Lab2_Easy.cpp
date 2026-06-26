#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& mat) {
  
    // Transpose the matrix
    int m = mat.size(), n = mat[0].size();
    vector<vector<int>> res(n, vector<int>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[j][i] = mat[i][j];
        }
    }

    // Reverse each row to rotate 90 degrees clockwise
    for (auto& row : res) {
        reverse(row.begin(), row.end());
    }

    return res;
}

int main() {
    vector<vector<int>> mat = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };

    vector<vector<int>> res = rotateMatrix(mat);

    for (auto& row : res) {
        for (int i = 0; i < row.size(); i++) {
            cout << row[i] << " ";
        }
        cout << endl;
    }
    return 0;
}