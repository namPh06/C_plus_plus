#include <iostream>
#include <unordered_map>
using namespace std;

bool Has0SumSet(int N, int a[]) {
    unordered_map<long long, bool> Existed;
    long long sum = 0;
    for(int i = 0; i < N; i++) {
        sum += a[i];
        if(Existed[sum] || sum == 0) return 1;
        Existed[sum] = 1;
    }
    return 0;
}

void Solve() {
    int N;
    cin >> N;
    int a[10000];
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    if(Has0SumSet(N, a)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        Solve();
    }
}