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
struct PhanSo{
	long long tu, mau;
};
void nhap(PhanSo &x){
	cin >> x.tu >> x.mau;
}
void rutgon (PhanSo &x){
	long long  gcd = ucln(x.tu,x.mau);
	x.tu /= gcd;
	x.mau /= gcd;
}
PhanSo tong (PhanSo p, PhanSo q){
	PhanSo t;
    long long g = ucln(p.mau,q.mau);
    long long MSC = p.mau * q.mau / g;
    t.tu = MSC/p.mau * p.tu + MSC/ q.mau * q.tu;
    t.mau = MSC;
    rutgon(t);
    return t;
}
void in(PhanSo &x){
	cout << x.tu <<"/"<<x.mau;;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo ans = tong(p,q);
	in(ans);
	return 0;
}