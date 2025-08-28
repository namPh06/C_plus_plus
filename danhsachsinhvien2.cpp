#include <bits/stdc++.h>
using namespace std;


void chuanhoa1(string &s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

struct SinhVien {
    string name;
    string lop;
    string ns;
    float gpa;
};

void nhap(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].lop;
        cin >> ds[i].ns;
        cin >> ds[i].gpa;


        if (ds[i].ns[1] == '/') ds[i].ns = "0" + ds[i].ns;
        if (ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");

   
        stringstream ss(ds[i].name);
        string token;
        vector<string> v;
        while (ss >> token) {
            chuanhoa1(token);
            v.push_back(token);
        }
        
        ds[i].name = "";
        for (int j = 0; j < v.size(); j++) {
            if (j > 0) ds[i].name += " ";
            ds[i].name += v[j];
        }
    }
}

void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        string s = to_string(i + 1);
        while (s.size() < 3) s = "0" + s;
        cout << "B20DCCN" << s << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].ns << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int n;
    cin >> n;
    nhap(ds, n);
    in(ds, n);
    return 0;
}
