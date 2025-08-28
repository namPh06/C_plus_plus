#include <bits/stdc++.h>
using namespace std;
int id = 1;

class GiangVien {
    private:
        string name, nganh, ma;
    public:
        string nganhmoi;
        
        friend istream &operator >> (istream &in, GiangVien &a) {
            getline(in, a.name);
            getline(in, a.nganh);
            vector<string> v;
            stringstream ss(a.nganh);
            string token;
            while (ss >> token) {
                v.push_back(token);
            }
            for (int i = 0; i < v.size(); i++) {
                a.nganhmoi += toupper(v[i][0]);
            }
            string s = to_string(id++);
            while (s.size() < 2) {
                s = "0" + s;
            }
            a.ma = "GV" + s;
            return in;
        }

        friend ostream &operator << (ostream &out, GiangVien a) {
            out << a.ma << " " << a.name << " " << a.nganhmoi << endl;
            return out;
        }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();  
    GiangVien ds[n];
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string s;
        getline(cin, s);
        vector<string> v1;
        stringstream ss(s);
        string token;
        while (ss >> token) {
            v1.push_back(token);
        }
        string tmp = "";
        for (int i = 0; i < v1.size(); i++) {
            tmp += toupper(v1[i][0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << tmp << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (tmp == ds[i].nganhmoi) {
                cout << ds[i];
            }
        }
    }

    return 0;
}
