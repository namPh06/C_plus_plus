#include <iostream>
#include <vector>
using namespace std;
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (size_t i = 0; i < row.size(); ++i) {
            cout << row[i];
            if (i < row.size() - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int t; 
    cin >> t;
    
    for (int test = 1; test <= t; ++test) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> A(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> A[i][j];
            }
        }
        vector<vector<int>> result(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    result[i][j] += A[i][k] * A[j][k];
                }
            }
        }
        cout << "Test " << test << ":" << endl;
        printMatrix(result);
    }

    return 0;
}
