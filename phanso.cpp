#include <bits/stdc++.h>
using namespace std;
struct SoPhuc{
	int thuc,ao;
	int thucmoi,aomoi;
};
void binhphong(SoPhuc c){
	c.thuc = c.ao*c.ao + c.ao*c.ao*(-1);
	c.ao = 2*c.ao*c.thuc;
   	}
   	void binhphuong_tong(SoPhuc a,SoPhuc b){
   		SoPhuc x = binhphong (a) + binhphuong (b);
	   }
void hienthi(const SoPhuc &c){
	if (c.ao >0);{
	cout << c.thuc <<"+"<<a.ao;
}
else cout << c.thuc << c.ao;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		SoPhuc A,B;
		cin >> a.thuc >> a.ao >> b.thuc >> b.ao;
		SoPhuc C = binh_phuong_tong(a,b);
		hien_thi(C);
		cout << endl;
	}
	return 0;
}