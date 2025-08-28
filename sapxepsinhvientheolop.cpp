#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string msv , name, lop,email;
	public :
		string getlop(){
			return lop;
		}
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
bool cmp(SinhVien a,SinhVien b){
	if (a.getlop() != b.getlop())
	return a.getlop() < b.getlop();
	return a.getmsv() < b.getmsv();
}
void sapxep (SinhVien ds[],int n){
	sort (ds,ds+n,cmp);
}
int main(){
	SinhVien ds[50];
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
	cin >> ds[i];
	sapxep(ds,n);
	for (int i=0;i<n;i++)
	cout << ds[i];
	return 0;
}