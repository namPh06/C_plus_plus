#include <bits/stdc++.h>
using namespace std;

int id = 1;
class NhanVien{
	private : 
	string name,gender,ns,dc,mst,day,mnv;
	public :
		string getns(){
			return ns;
		}
		friend istream& operator >> (istream &in, NhanVien &a){
			scanf ("\n");
			getline (in,a.name);
		    getline (in,a.gender);
		    getline (in,a.ns);
		    getline (in,a.dc);
		    getline (in,a.mst);
		    getline (in,a.day);
		    string s = to_string (id++);
			while (s.size()<5)
			s = "0"+ s;
			a.mnv = s;
		 return in;
		}
		friend ostream& operator << (ostream &out, NhanVien a){
			out << a.mnv << " "<< a.name << " "<< a.gender <<" "<< a.ns << " "<<a.dc <<" "<<a.mst <<" "<<a.day<<endl;
			return out;
		}
};
bool cmp (NhanVien a, NhanVien b){
  string s = a.getns() ;
  string t = b.getns() ;
  int t1 = (s[0]-'0')*10 + (s[1]-'0'),  n1 = (s[3]-'0')*10 + s[4]-'0', na1 = stoi (s.substr(6));
  int t2 = (t[0]-'0')*10 + (t[1]-'0'), n2 = (t[3]-'0')*10 + t[4]-'0', na2 = stoi (t.substr(6));
  if (na1 != na2)
  return na1 < na2;
  if (t1 != t2)
  return t1 < t2;
  return n1 < n2;
}
void sapxep(NhanVien ds[],int N){
	sort(ds , ds + N,cmp);
}
int main(){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}





