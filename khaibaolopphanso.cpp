#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long b){
	while (b!=0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}
class PhanSo{
	private : 
	long long tu,mau;
	public :
	PhanSo (long long m = 1 , long long n = 1){
			tu = m;
			mau = n;
	}
  istream& operator >> (istream &in,PhanSo &p){
   	in >> p.tu;
   	in >> p.mau;
   	return in;
   } 
   void rutgon(){
   	long long g = gcd (tu,mau);
   	tu = tu/g;
   	mau = mau /g;
   }
   ostream& operator << (ostream &out,PhanSo p){
   	out << p.tu <<"/"<< p.mau;
   	return out;
   }
};
int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
	}