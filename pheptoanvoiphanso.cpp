#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	while (b!=0){
		long long  r = a % b;
		a = b;
		b = r;
	}
	return a;
}
struct PhanSo {
	long long tu;
	long long mau;
};
void rutgon (PhanSo &a){
	long long k = ucln(a.tu,a.mau);
	a.tu /= k;
	a.mau /=k;
}
PhanSo cong (PhanSo a,PhanSo b){
	PhanSo c;
	long long k = ucln(a.mau,b.mau);
	k = a.mau * b.mau / k;
	c.mau = k;
	c.tu = a.tu * k / a.mau + b.tu*k/b.mau;
	rutgon (c);
	return c; 
}
PhanSo nhan(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu = a.tu*b.tu;
	c.mau = a.mau*b.mau;
	rutgon(c);
	return c;
}
void process (PhanSo a,PhanSo b){
	rutgon(a);
	rutgon(b);
	PhanSo c = cong(a,b);
	c = nhan (c,c);
	PhanSo d = nhan (a,b);
	d = nhan (d,c);
	cout << c.tu <<"/"<<c.mau <<" "<< d.tu <<"/"<<d.mau << endl;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau ;
		process (A,B);
	}
	return 0;
}