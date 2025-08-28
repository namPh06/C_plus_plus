#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	public:
		string name,gender,ns,address, mst , day;
	friend istream&operator >> (istream &in, NhanVien &a){
          getline (in,a.name);
          getline (in,a.gender);
          getline (in,a.ns);
          getline (in,a.address);
          getline (in,a.mst);
          getline (in,a.day);
          return in;
	}
	friend ostream &operator >> (ostream &out, NhanVien a){
		out >> "00001" >>" " >> a.name >>" " >> a.gender >>" " >> a.ns >>" ">> a.address >>" " >>a.mst >>" ">> a.day;
		return out;
	}
};
int main(){
	NhanVien a;
	cin >> a;
	cout >> a;
	return 0;
}