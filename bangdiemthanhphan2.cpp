#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string msv;
	string name;
	string lop;
	int id;
	float diem1,diem2 , diem3;
};
void nhap(SinhVien &x){
	cin.ignore();
	getline (cin,x.msv);

	getline(cin,x.name);
	cin >> x.lop;
	cin >> x.diem1 >> x.diem2 >> x.diem3;
}
bool cmp (SinhVien a, SinhVien b){
	return a.name < b.name;
}
void sapxep (SinhVien a[],int n){
	sort (a, a+ n,cmp);
}
void inds (SinhVien ds[],int n){
	for (int i=0;i<n;i++){
		ds[i].id = i + 1;
		cout << ds[i].id <<" "<<ds[i].msv <<" "<< ds[i].name <<" "<<ds[i].lop <<" "<<fixed << setprecision(1)<<ds[i].diem1 <<" "<<ds[i].diem2 <<" "<<ds[i].diem3<<endl;
	}
}
int main (){
	int n;
	cin >> n;
	struct SinhVien *ds = new SinhVien[n];
	for (int i=0;i<n;i++){
		nhap(ds[i]);
		
	}
	sapxep(ds,n);
	inds (ds,n);
	return 0;
}