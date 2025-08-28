#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	while (b!=0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}
struct PhanSo {
	long long a;
	long long b;
	long long tu;
	long long mau;
};
void nhap(PhanSo &x){
	cin >> x.a >> x.b;
}
void rutgon(PhanSo &x){
	x.tu = x.a / ucln(x.a, x.b);
	x.mau = x.b / ucln (x.a,x.b);
}
void in ( PhanSo &x){
	cout << x.tu <<"/"<<x.mau;
}
int main(){
     struct PhanSo p;
     nhap (p);
     rutgon(p);
     in(p);
     return 0;
}