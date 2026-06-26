#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int median(vector<vector<int>> &mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    // min-heap storing {value, row, col}
    priority_queue<vector<int>,
            vector<vector<int>>, greater<vector<int>>> minHeap;

    int medianIndex = (rows * cols) / 2;
    int count = 0, result = -1;

    // push the first element of each row into the min-heap
    for (int i = 0; i < rows; i++) {
        minHeap.push({mat[i][0], i, 0});
    }

    // extract the smallest elements until reaching the median
    while (count <= medianIndex) {
        vector<int> top = minHeap.top();
        minHeap.pop();

        int val = top[0], row = top[1], col = top[2];
        result = val;
        count++;

        // if more elements are left in the current
        // row, push next
        if (col + 1 < cols) {
            minHeap.push({mat[row][col + 1], row, col + 1});
        }
    }

    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    cout << median(matrix) << endl;
    return 0;
}