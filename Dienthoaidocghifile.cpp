#include <bits/stdc++.h>
using namespace std;
class NhanVien {
	public: 
	 string ngay,name,sdt,ten,tendem;
	friend istream &operator >> (istream &in, NhanVien &a){
	    getline (in, a.ngay);
	    in.ignore();
	    getline (in,a.name);
	    in >> a.sdt;
	    vector < string > v;
	    stringstream ss(a.name);
	    string token;
	    while (ss >> token){
	    	v.push_back (token);
		}
	    a.ten = v[v.size() - 1];
	    a.tendem = v[v.size() - 2];
	    return in;
	}
	friend ostream &operator << (ostream &out, NhanVien a){
		out << a.name <<": "<< a.sdt <<" " << a.ngay<< endl;
		return out;
	}
};
bool cmp(NhanVien a, NhanVien b){
	if (a.ten != b.ten )
	return a.ten < b.ten;
	return a.tendem < b.tendem;
}
int main() {
    ifstream input("SOTAY.txt");
    ofstream output("DIENTHOAI.txt");
    vector<NhanVien> danhSach;
    string line, currentDate;
    while (getline(input, line)) {
            NhanVien nv;
            nv.name = line;
            getline(input, nv.sdt);
            nv.ngay = currentDate;
            danhSach.push_back(nv);
    }
    sort(danhSach.begin(), danhSach.end(), cmp);
    for (auto nv : danhSach) {
        output << nv;
    }
    input.close();
    output.close();
    return 0;
}