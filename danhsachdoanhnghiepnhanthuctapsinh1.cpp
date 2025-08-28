#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	private :
		string ma,name;
		int number;
	public :
		int getnumber(){
			return number;
		}
		string getma(){
			return ma;
		}
		friend istream &operator >> (istream &in,DoanhNghiep &a){
			getline (in,a.ma);
			getline (in,a.name);
			in >> a.number;
			in.ignore();
			return in;

		}
		friend ostream &operator << (ostream &out,DoanhNghiep a){
			out << a.ma <<" "<<a.name << " "<<a.number << endl;
			return out;
		}
};
bool cmp(DoanhNghiep a,DoanhNghiep b){
	if (a.getnumber() != b.getnumber())
	return a.getnumber() > b.getnumber();
	return a.getma() > b.getma();
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	DoanhNghiep ds[n];
	for (int i=0;i<n;i++){
		cin >> ds[i];
	}
	sort(ds,ds+n,cmp);
	for (int i=0;i<n;i++){
		cout << ds[i];
	}
	return 0;
}