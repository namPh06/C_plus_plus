#include <bits/stdc++.h>
using namespace std;
long long ucln(long long a,long b){
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
    	PhanSo(long long m = 1,long long n = 1){
    		tu = m;
    		mau = n;
		}
	void rutgon (){
	int gcd = ucln(tu,mau);
	tu /= gcd;
	mau /= gcd;
}
	   friend istream& operator >> (istream &in,PhanSo &p ){
	   	     in >> p.tu >> p.mau;
            return in;
	   }
	    friend ostream& operator << (ostream &out, PhanSo p) {
            p.rutgon(); 
            out << p.tu << "/" << p.mau;
            return out;
        }
	     PhanSo operator +	(PhanSo q) {
            long long gcd = ucln(mau, q.mau);
            long long MSC = mau * q.mau / gcd; 
            long long tuMoi = MSC / mau * tu + MSC / q.mau * q.tu;
            PhanSo ans(tuMoi, MSC);
            ans.rutgon();
            return ans;
        }
        
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
