#include <bits/stdc++.h>
using namespace std;
int id = 0;
class SinhVien{
	private :
		string name, lop , ns,msv ;
		double gpa;
	public :
		friend istream& operator >> (istream &in,SinhVien &a){
			in.ignore();
			getline (in,a.name);
			getline (in,a.lop);
			getline (in,a.ns);
			in >> a.gpa;
			if (a.ns[1]=='/')
			a.ns = "0"+ a.ns;
			if (a.ns[4]=='/')
			a.ns.insert(3,"0");
			string s = to_string (id+1);
			while (s.size()<3)
			s = "0"+s;
			a.msv = "B20DCCN" + s;
		}
		friend ostream& operator << (ostream &out,SinhVien a){
	        out << a.msv<<" "<< a.name << " "<< a.lop <<" "<< a.ns <<" "<< fixed <<setprecision(2)<<a.gpa<<endl;
			return out;
		}
};
int main(){
	SinhVien ds[50];
	int N,i;
	cin >> N;
	for ( i=0;i<N;i++){
		cin >> ds[i];
	}
	for (i= 0;i<N;i++){
		cout << ds[i];
	}
	return 0;

}