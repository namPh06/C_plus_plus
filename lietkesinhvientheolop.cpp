#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string msv , name,email;
	public :
		string lop;
		string getmsv(){
			return msv;
		}
		friend istream& operator >> (istream &in,SinhVien &a){
			in.ignore();
			getline (in,a.msv);
			getline (in,a.name);
			getline (in,a.lop);
			getline (in,a.email);
			return in;
		}
		friend ostream& operator << (ostream &out,SinhVien a){
			out << a.msv <<" "<<a.name <<" "<<a.lop <<" "<< a.email << endl;
			return out;
		}
		
};

int main(){
	SinhVien ds[1001];
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
	cin >> ds[i];
	int t;
	cin >> t;
	while (t--){
	string s;
	cin >> s;
	cout <<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
	for (int i=0;i<n;i++)
	{
		if (s == ds[i].lop)
		cout << ds[i];	
	}
	
	return 0;}
}