#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
		string name,lop,birth;
		double gpa;
    public :
    	SinhVien(){
    		name ="";
    		lop = "";
    		birth ="";
    		gpa = 0;
		}
	friend istream& operator >> (istream &in,SinhVien &a){
		getline (in,a.name);
		getline (in,a.lop);
		getline (in,a.birth);
		in >> a.gpa;
		if (a.birth[1]=='/')
		a.birth = "0" + a.birth;
		if(a.birth[4]=='/')
		a.birth.insert(3,"0");
		return in;
	}
	friend ostream& operator << (ostream &out,SinhVien a){
		out << "B20DCCN001"<<" "<<a.name << " "<< a.lop << " "<< a.birth << " "<< fixed << setprecision(2)<<a.gpa;
		return out;
	}
};
int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}