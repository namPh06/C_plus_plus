#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name;
	string ns;
	double mark1 ,mark2 , mark3;
	double total;
};
void nhap(ThiSinh &a){
	getline (cin,a.name);
	getline (cin,a.ns);
	cin >> a.mark1 >> a.mark2 >> a.mark3;
	a.total  = a.mark1 + a.mark2 + a.mark3;
}
void in(ThiSinh a){
	cout << a.name <<" "<< a.ns <<" "<<fixed << setprecision(1)<<a.total;
}
int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}