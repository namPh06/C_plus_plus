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
    int tu,mau;
};
void rutgon(PhanSo &x){
	x.tu = x.tu / ucln(x.tu,x.mau);
	x.mau = x.mau / ucln(x.tu,x.mau);
}
void nhap (PhanSo &x){
	cin >> x.tu >> x.mau;
}
void in  (PhanSo x){
	cout << x.tu << "/" << x.mau;
}
PhanSo tong (PhanSo p, PhanSo q){
	PhanSo t;
    int g = ucln(p.mau,q.mau);
    int MSC = p.mau * q.mau / g;
    t.tu = MSC/p.mau * p.tu + MSC/ q.mau * q.tu;
    t.mau = MSC;
    rutgon(t);
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}