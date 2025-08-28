#include <bits/stdc++.h>
using namespace std;
class NhanVien {
public:
    string mnv, name, ns;
    int salary, total, day;
    string job;
    int phucap, thuong;
    friend istream &operator>>(istream &in, NhanVien &a) {
        getline(in, a.mnv);
        getline(in, a.name);
        getline(in, a.ns);
        in >> a.day;
        in >> a.salary;
        in.ignore();
        if (a.ns[1] == '/')
            a.ns = "0" + a.ns;
        if (a.ns[4] == '/')
            a.ns.insert(3, "0");
        if (a.mnv[3] == '-')
            a.job = a.mnv.substr(0, 2);
        else
            a.job = a.mnv.substr(0, 3);
        if (a.day >= 27)
            a.thuong = a.salary * 20 / 100;
        else if (a.day >= 25)
            a.thuong = a.salary * 10 / 100;
        else
            a.thuong = 0;
        if (a.job == "GD")
            a.phucap = 2000000;
        else if (a.job == "PGD")
            a.phucap = 1000000;
        else if (a.job == "TP")
            a.phucap = 500000;
        else
            a.phucap = 200000;
        a.total = a.salary * a.day + a.thuong + a.phucap;
        return in;
    }
    friend ostream &operator<<(ostream &out, const NhanVien &a) {
        out << a.mnv << " " << a.name << " ";
        if (a.job == "GD")
            out << "Giam doc" << " ";
        else if (a.job == "PGD")
            out << "Pho giam doc" << " ";
        else if (a.job == "TP")
            out << "Truong phong" << " ";
        else
            out << "Nhan vien" << " ";
        out << a.ns << " " << a.day << " " << a.salary << " " << a.total << endl;
        return out;
    }
};

bool cmp(const NhanVien &a, const NhanVien &b) {
    if (a.total != b.total)
        return a.total > b.total;
    return a.mnv < b.mnv;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<NhanVien> employees(n);
    for (int i = 0; i < n; i++) {
        cin >> employees[i];
    }
    sort(employees.begin(), employees.end(), cmp);
    for (const auto &employee : employees) {
        cout << employee;
    }
    return 0;
}
