#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private : 
	string name,gender, birth,dc, mst , day;
	public : 
	friend istream& operator >> (istream &in, NhanVien &a){
		getline (in,a.name);
		getline (in,a.gender);
		getline (in,a.birth);
		getline (in, a.dc);
		getline (in , a.mst);
		getline (in,a.day);
		return in;
	}
	friend ostream& operator >> (ostream &out,NhanVien a){
		out << "00001"<<" "<< a.name <<" "<<a.gender <<" " << a.birth <<" "<< a.dc <<" "<< a.mst <<" "<< a.day;
		return out;
	}
};
int main(){
	NhanVien a;
	cin >> a;
	cout >> a;
	return 0;
}