#include <bits/stdc++.h>
using namespace std;
struct thuctap {
  int id ;
  string name;
  string MSV;
  string lop;
  string email;
  string doanhnghiep1;
  

};
bool cmp(thuctap a, thuctap b){
	return a.name < b.name;
}
int main(){
	int n;
	cin >> n;
	thuctap a[1000];
	cin.ignore();
	for(int i=0;i<n;i++){
		cin >> a[i].MSV;
		getline(cin,a[i].name);
		cin >> a[i].lop;
		cin >> a[i].email;
		cin >> a[i].doanhnghiep1;
		a[i].id = i + 1;
}
sort (a,a+n,cmp);
int q;
cin >> q;
string doanhnghiep2;
for (int i=0;i<q;i++){
	cin >> doanhnghiep2;
}
sort (a,a+n,cmp);
for (int i=0;i<n;i++){
	if (a[i].doanhnghiep1 == doanhnghiep2){
		cout << a[i].id <<" "<< a[i].MSV <<" "<<a[i].name <<" "<<a[i].lop <<" "<<a[i].email<<" "<<a[i].doanhnghiep1 << endl;
	}
}
return 0;	
}