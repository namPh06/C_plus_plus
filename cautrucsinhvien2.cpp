#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string name;
	string lop;
	string ns;
	float gpa;
};
void nhapThongTinSV(SinhVien &x){
	getline (cin,x.name);
	cin >> x.lop;
	cin >> x.ns;
	cin >> x.gpa;
}
void inThongTinSV(SinhVien &x){
     if (x.ns[1]=='/'){
     	x.ns = "0" + x.ns;
	 }
	 if (x.ns[4]=='/'){
	 	x.ns = x.ns.insert (3,"0");
	 }
	 cout <<"N20DCCN001"<<" "<<x.name <<" "<<x.lop <<" "<<x.ns <<" ";
	 cout << fixed << setprecision(2)<<x.gpa;
}
int main(){
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
}