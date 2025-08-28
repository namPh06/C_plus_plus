#include <bits/stdc++.h>
using namespace std;

class KhoangCach {
public:
    int x, y;
    friend istream& operator>>(istream &in, KhoangCach &a) {
        in >> a.x >> a.y;
        return in;
    }
    friend double operator-(KhoangCach a, KhoangCach b) {
        return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        KhoangCach A, B;
        cin >> A >> B;
        cout << fixed << setprecision(2) << A - B << endl; 
    }
    return 0;
}
