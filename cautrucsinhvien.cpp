#include <bits/stdc++.h>
using namespace std;

struct ThiSinh {
    float gpa;
    string lop;
	string name;
	string ngaysinh;
};
void nhap (ThiSinh &x){

	getline (cin, x.name);
	cin >> x.lop;
	cin >> x.ngaysinh ;
     if (x.ngaysinh[1]=='/'){
     	x.ngaysinh = "0" + x.ngaysinh;
	 }
	 if (x.ngaysinh[4]=='/'){
	 	x.ngaysinh.insert(3,"0");
	 }
   	cin >>x.gpa;
}
void in(ThiSinh &x){
    cout <<"B20DCCN001"<<" "<<x.name<<" "<<x.lop <<" " << x.ngaysinh <<" ";
    cout << fixed << setprecision(2)<<x.gpa;
}
int main(){
	struct ThiSinh A;
	nhap (A);
	in(A);
	return 0;
}