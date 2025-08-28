#include <bits/stdc++.h>
using namespace std;
int id = 1;
class GiangVien{
	private :
		string name,nganh;
	public :
		string ma,newnganh;
		string getname(){
			return name;
		}
	 friend istream&operator >> (istream &in,GiangVien &a){
	 	getline (in,a.name);
	 	getline (in,a.nganh);
	 	string s = to_string (id++);
	 	while (s.size() < 2)
	 	s = "0"+s;
	 	a.ma = "GV"+ s;
	 	stringstream ss(a.nganh);
	 	string token;
	 	while (ss >> token){
	 		a.newnganh += toupper (token[0]);
		 }
		 return in;
	 } 
	 	  friend ostream & operator << (ostream &out, GiangVien a){
	  out << a.ma <<" "<<a.name <<" "<< a.newnganh<<endl;
	  return out; 	
	}
};
bool seek (string a,string b){
	transform (a.begin(),a.end(),a.begin(),::tolower);
	transform (b.begin(),a.end(),a.begin(),::tolower);
	return (b.find(a)!= string :: npos);
}
int main(){
	int n;
	cin >> n;
	GiangVien ds[n];
	cin.ignore();
	for (int i=0;i<n;i++){
		cin >> ds[i];
	}
	int q;
	cin >> q;
	cin.ignore();
	while (q--){
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA"<<" "<<s <<":"<< endl;
		for (int i=0;i<n;i++){
			if (seek(s,ds[i].getname()))
			cout << ds[i];
		}
	}
	return 0;
}