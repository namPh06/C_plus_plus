#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv, name,lop,email;
	public :
		string key;
	    friend istream & operator >>(istream &in,SinhVien &a){
	    	getline (in,a.msv);
	    	getline (in,a.name);
	    	getline (in,a.lop);
	    	getline (in,a.email);
	    	a.key = a.lop.substr(1,2);
	    	return in;
		}
		friend ostream &operator <<(ostream &out,SinhVien a){
			out << a.msv <<" "<< a.name <<" "<<a.lop <<" "<<a.email<<endl;
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
		cin >> s;
		string keyword = s.substr(2,2);
		cout << "DANH SACH SINH VIEN KHOA"<<" "<<s <<":"<<endl;
		for (int i=0;i<n;i++){
			if (keyword == ds[i].key)
			cout << ds[i];
		}
	}
	return 0;
}