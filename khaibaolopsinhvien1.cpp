#include <bits/stdc++.h>
using namespace std;

class sinhVien {
    private:
        string name, lop, birth;
        double gpa;
    public:
        void nhap() {
            getline(cin, name);
            getline(cin, lop);
            getline(cin, birth);
            cin >> gpa;
            if (birth[1] == '/') {
                birth = "0" + birth;
            }
            if (birth[4] == '/') {
                birth.insert(3, "0");
            }
        }
        void xuat() {
            cout << "B20DCCN001 " << name << " " << lop << " " << birth << " " << fixed << setprecision(2) << gpa;   
        }
};

int main() {
    sinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
