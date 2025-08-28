#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string msv , name, lop,email;
	public :
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
	return a.getmsv() < b.getmsv();
}
int main(){
    SinhVien a;
    vector <SinhVien > v;
    while (cin >> a){
    	v.push_back (a);
	}
	sort (v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++)
	cout << v[i];
	return 0;
}