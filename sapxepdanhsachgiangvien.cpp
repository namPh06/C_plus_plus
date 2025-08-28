#include <bits/stdc++.h>
using namespace std;

int id = 1;

class GiaoVien {
    private:
        string name, nganh;
    public:
        string ten, nganhmoi, ma;
        friend istream& operator >> (istream &in, GiaoVien &a) {
       scanf ("\n");
            getline(in, a.name);
            getline(in, a.nganh);
            vector<string> v;
            string token;
            stringstream ss2(a.name);
            while (ss2 >> token) {
                v.push_back(token);
            }
            a.ten = v[v.size() - 1];
            vector<string> v2;
            stringstream ss1(a.nganh);
            while (ss1 >> token) {
                v2.push_back(token);
            }
            for (int i = 0; i < v2.size(); i++) {
                a.nganhmoi += toupper(v2[i][0]); 
            }
            string s = to_string(id++);
            while (s.size() < 2) {
                s = "0" + s;
            }
            a.ma = "GV" + s;
            
            return in;
        }
        friend ostream& operator << (ostream &out, GiaoVien a) {
            out << a.ma << " " << a.name<< " " << a.nganhmoi << endl;
            return out;
        }
};
bool cmp(GiaoVien a, GiaoVien b) {
    if (a.ten != b.ten) 
        return a.ten < b.ten; 
    return a.ma < b.ma; 
}

int main() {
    int n;
    cin >> n;
    GiaoVien ds[n];
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << ds[i];
    }
    return 0;
}
