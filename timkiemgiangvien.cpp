#include <bits/stdc++.h>
using namespace std;

int id = 1; 

class GiangVien {
private:
    string name, nganh;
public:
    string ma, newnganh;
   string getname(){
    	return name;
	}
    friend istream& operator>>(istream& in, GiangVien& a) {
        getline(in, a.name);  
        getline(in, a.nganh);
        string s = to_string(id++);
        while (s.size() < 2) {
            s = "0" + s;
        }
        a.ma = "GV" + s;
        stringstream ss(a.nganh);
        string word;
        a.newnganh = "";
        while (ss >> word) {
            a.newnganh += toupper(word[0]);
        }

        return in;
    }
    friend ostream& operator<<(ostream& out, const GiangVien& a) {
        out << a.ma << " " << a.name << " " << a.newnganh << endl;
        return out;
    }
};

bool seek(const string& keyword, const string& name) {
    string lower_keyword = keyword;
    string lower_name = name;
    transform(lower_keyword.begin(), lower_keyword.end(), lower_keyword.begin(), ::tolower);
    transform(lower_name.begin(), lower_name.end(), lower_name.begin(), ::tolower);
    return lower_name.find(lower_keyword) != string::npos;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<GiangVien> ds(n);
    for (int i = 0; i < n; ++i) {
        cin >> ds[i];
    }
    int q;
    cin >> q;
    cin.ignore(); 
    while (q--) {
        string s;
        getline(cin, s); 
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for (int i = 0; i < n; ++i) {
            if (seek(s, ds[i].getname())) {
                cout << ds[i];
            }
        }
    }

    return 0;
}
