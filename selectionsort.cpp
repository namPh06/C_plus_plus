#include <bits/stdc++.h>
using namespace std;
void selectionsort(int *arr, int length, bool (*comparisonFunc)(int, int)){
    for (int i = 0; i < length; i++){
        int minindex = i;
        for (int j = i + 1; j < length; j++){
            if (comparisonFunc(arr[minindex], arr[j])){
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
bool ascending(int a, int b) {
    return a > b;
}
bool descending(int a, int b) {
    return a < b;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    selectionsort(a, n, ascending);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
