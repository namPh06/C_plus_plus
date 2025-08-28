#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string lop;
	string name;
	string ngaysinh;
	long long mst;
	string gender;
	string day;
	string address;
	
};
void nhap (NhanVien &x){

	getline (cin, x.name);
	cin >> x.gender;
	cin >> x.ngaysinh;
    cin.ignore();
    getline(cin,x.address);
    cin >> x.mst;
    
   	cin >>x.day;
}
void in(NhanVien &x){
    cout <<"00001"<<" "<<x.name<<" "<<x.gender <<" " << x.ngaysinh <<" "<<x.address<<" "<<x.mst<<" "<<x.day;

}
int main(){
	struct NhanVien a;
	nhap (a);
	in(a);
	return 0;
}