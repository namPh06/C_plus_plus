#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string msv,name,lop,email;
	public :
		string firstchar,majorCode;
		friend istream &operator >>(istream &in,SinhVien &a){
			getline (in,a.msv);
			getline (in,a.name);
			getline (in,a.lop);
			getline (in,a.email);
		   a.firstchar = a.lop[0];
		   a.majorCode = a.msv.substr(3,4);
		   return in;
		}
		friend ostream &operator << (ostream &out, SinhVien a){
			out << a.msv <<" "<< a.name <<" "<<a.lop <<" "<<a.email << endl;
			return out;
		}
};
int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	cin.ignore();
	for (int i=0;i<n;i++){
		cin >> ds[i];
	}
	int q;
	cin >> q;
	cin.ignore();
	while (q--){
		string s;
		getline (cin,s);
		cout <<"DANH SINH SINH VIEN NGANH"<<" "<<s <<":"<< endl;
		   if (s == "Ke toan") {
            for (int i = 0; i < n; i++) {
                if (ds[i].majorCode == "DCKT") {
                    cout << ds[i];
                }
            }
        } else if (s == "Cong nghe thong tin") {
            for (int i = 0; i < n; i++) {
                if (ds[i].majorCode == "DCCN" && ds[i].firstchar != "E") {
                    cout << ds[i];
                }
            }
        } else if (s == "An toan thong tin") {
            for (int i = 0; i < n; i++) {
                if (ds[i].majorCode == "DCAT" && ds[i].firstchar != "E") {
                    cout << ds[i];
                }
            }
        } else if (s == "Vien thong") {
            for (int i = 0; i < n; i++) {
                if (ds[i].majorCode == "DCVT") {
                    cout << ds[i];
                }
            }
        } else if (s == "Dien tu") {
            for (int i = 0; i < n; i++) {
                if (ds[i].majorCode == "DCDT") {
                    cout << ds[i];
                }
            }
        }
	}
	return 0;
}