#include <bits/stdc++.h>
using namespace std;

class Startup {
public:
    int ma, share, tt;
    double mark;
    friend istream &operator>>(istream &in, Startup &a) {
        in >> a.ma >> a.share >> a.tt;
        a.mark = a.share * 0.7 + a.tt * 0.3; 
        return in;
    }
    friend ostream &operator<<(ostream &out, const Startup &a) {
        out << a.ma << " ";
        return out;
    }
};
bool cmp(const Startup &a, const Startup &b) {
    if (a.mark == b.mark)
        return a.ma < b.ma;
    return a.mark > b.mark;
}

int main() {
    int n;
    cin >> n;
    vector<Startup> ds(n); 
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < min(7, n); i++) {
        cout << ds[i];
    }
    cout << endl;

    return 0;
}
