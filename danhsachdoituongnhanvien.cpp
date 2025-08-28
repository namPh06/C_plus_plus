#include <bits/stdc++.h>
using namespace std;
int id = 0;
class NhanVien{
	private : 
	string name,gender, birth,dc, mst,day,mnv;
	public : 
	friend istream& operator >> (istream &in, NhanVien &a){
		in.ignore();
		getline (in,a.name);
		getline (in,a.gender);
		getline (in,a.birth);
		getline (in, a.dc);
		getline (in , a.mst);
		getline (in,a.day);
	string s = to_string (id++);
	while (s.size()<5)
	s = "0"+s;
	a.mnv = s;
		return in;
	}
	friend ostream& operator << (ostream &out,NhanVien a){
		out << a.mnv<<" "<< a.name <<" "<<a.gender <<" " << a.birth <<" "<< a.dc <<" "<< a.mst <<" "<< a.day;
		return out;
	}
};
int main(){
	NhanVien ds[50];
    int N,i;
    cin >> N;jhjhjjhj