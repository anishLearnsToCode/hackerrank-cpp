#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> row;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << matrix[which][index] << endl;
    }
    return 0;
}
