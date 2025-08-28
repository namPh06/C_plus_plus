#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int minOperationsToEqualize(const vector<int>& array) {
    unordered_map<int, int> frequency;
    int n = array.size();

    for (int num : array) {
        frequency[num]++;
    }
  
    int max_freq = 0;
    for (const auto& entry : frequency) {
        if (entry.second > max_freq) {
            max_freq = entry.second;
        }
    }

    return n - max_freq;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n);
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }

        cout << minOperationsToEqualize(array) << '\n';
    }

    return 0;
}
