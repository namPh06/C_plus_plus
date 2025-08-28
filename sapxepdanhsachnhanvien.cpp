#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
	string name;
	string date;
	string gender;
	string address;
	string mst;
	string day;
	string ns;
};
void nhap (NhanVien &x){
    cin.ignore();
    getline (cin,x.name);
    cin >> x.gender;
    cin >> x.date;    
	cin.ignore();
    getline (cin,x.address);
    cin >> x.mst;
    cin >> x.day;
	x.ns = x.date.substr(6,4);
}
bool cmp(NhanVien a, NhanVien b){
	return a.ns < b.ns; 
}
void sapxep(NhanVien a[],int n){
	sort (a,a+n,cmp);
}
void inds(NhanVien ds[],int n){
	for (int i=0;i<n;i++){
	
	string s = to_string (i+1);
	while (s.size()<5)
	s = "0" + s;
	cout << s <<" " << ds[i].name <<" "<<ds[i].gender <<" "<<ds[i].date <<" "<< ds[i].address<<" "<<ds[i].mst<<" "<<ds[i].day<<endl;
}
}
int main(){
	struct NhanVien ds[50];
	int n,i;
	cin >> n;
	for (int i=0;i<n;i++)
	nhap(ds[i]);
	sapxep(ds, n);
	inds (ds,n);
	return 0;
	
}