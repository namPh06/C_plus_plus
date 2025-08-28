#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for (int i=1;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
class SinhVien {
	private:
		string name,lop,ns;
		double gpa;
    public:
    	string newname;
    	friend istream &operator >>(istream &in,SinhVien &a){
    		getline (in,a.name);
    		getline (in,a.lop);
    		getline (in,a.ns);
    		cin >> a.gpa;
    		if (a.ns[1] =='/')
    		a.ns = "0" + a.ns;
    		if (a.ns[4]=='/')
    		a.ns.insert(3,"0");
    		stringstream ss(a.name);
    		string token;
    		while (ss >> token){
    			a.newname += chuanhoa(token);
    			a.newname +=" ";
			}
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			out <<"B20DCCN001"<<" "<<a.newname << a.lop <<" "<<a.ns <<" "<<fixed << setprecision(2)<<a.gpa << endl;
			return out;
		}  	
};
int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
}