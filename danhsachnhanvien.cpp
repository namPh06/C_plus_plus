#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name;
	string gender;
	string date;
	string address;
	string MST;
	string day;
	string ma;
};
void nhap (NhanVien &x){
	cin.ignore();
	getline (cin,x.name);
	cin >> x.gender;
	cin >> x.date;
    cin.ignore();
  getline (cin,x.address);
    cin >> x.MST;
    cin >> x.day;
}
void inds(NhanVien a[],int n){
	for (int i=0;i<n;i++){
		string s = to_string (i+1);
		while (s.size()<5) s ="0"+s;
		cout <<s <<" ";
		cout << a[i].name <<" "<<a[i].gender <<" " << a[i].date <<" "<<a[i].address<<" "<<a[i].MST<<" "<<a[i].day;
	}
}
int main(){
	struct NhanVien ds[50];
	int n,i;
	cin >> n;
	for ( i=0;i<n;i++)
	{
	nhap(ds[i]);
	}
	inds (ds,n);
	return 0;
}