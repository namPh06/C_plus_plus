#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string &s){
	s[0] = toupper(s[0]);
	for (int i = 1;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
class SinhVien{
	public: 
	  string msv,name,ns,lop,tmp ,ten , ho , dem;
	  double gpa;
	friend istream &operator >> (istream &in, SinhVien &a){
		in.ignore();
		getline (in,a.msv);
		getline (in,a.name);
		getline (in,a.ns);
		getline (in,a.lop);
		in >> a.gpa;
		if (a.ns[1] == '/' )
		a.ns = "0" + a.ns;
		if (a.ns[4] == '/')
		a.ns.insert(3,"0");
		stringstream ss(a.name);
		vector <string > v;
		string token;
		while (ss >> token){
			v.push_back(chuanhoa(token));
		}
		a.tmp == "";
		a.ten = v[2];
		a.dem =  v[1];
		a.ho = v[0];
		for (string x : v){
			a.tmp += x;
			a.tmp +=" ";
		}
		a.tmp.pop_back();
		return in;
    } 
	friend ostream&operator << (ostream &out, SinhVien a){
		out <<a.msv <<" "<< a.tmp <<" "<< a.ns << " "<< a.lop <<" "<< fixed << setprecision(2) << a.gpa << endl;
		return out; 
	}
	
};
bool cmp(SinhVien a,SinhVien b){
	if (a.lop != b.lop)
	return a.lop < b.lop;
	else {
		if (a.ten != b.ten)
		return a.ten < b.ten;
		if (a.ho != b.ho)
		return a.ho < b.ho;
		return a.dem < b.dem;
	}
}
int main(){
     int n;
	 cin >> n;
	 SinhVien a[n];
	 for (int i = 0;i<n;i++){
	 	cin >> a[i];
	 }	
	 sort (a,a+n,cmp);
	 for (int i = 0;i < n;i++){
	 	cout << a[i];
	 }
	 return 0;
}