#include <bits/stdc++.h>
using namespace std;
class gamethu{
	public :
		string username, password, timein,timeout;
		string name;
		int h1,h2, m1,m2;
		int time, h ,m;
	friend istream & operator >> (istream &in,gamethu &a){
		getline (in,a.username);
		getline (in,a.password);
	    getline (in,a.name);
	    getline(in,a.timein);
	    getline (in,a.timeout);
	    a.h1 = stoi(a.timein.substr(0,2));
	    a.m1 = stoi(a.timein.substr(3,2));
	    a.h2 = stoi(a.timeout.substr(0,2));
	    a.m2 = stoi(a.timeout.substr(3,2));
	    a.time = a.h2 * 60 + a.m2 - (a.h1 * 60 + a.m1);
	    a.h = a.time / 60 ;
	    a.m = a.time % 60;
	    return in;
	}
	friend ostream & operator << (ostream & out, gamethu a){
	     out << a.username <<" "<< a.password <<" "<< a.name <<" "<<a.h <<" "<<"gio"<< a.m <<" "<<"phut"<< endl;
	     return out;	
	}
};
bool cmp (gamethu a,gamethu b){
	if (a.h != b.h)
	return a.h > b.h;
	else return a.username > b.username;
}
int main(){
	int n;
	cin >> n;
	gamethu a[n];
	cin.ignore();
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cout << a[i];
	}
	return 0;
	
}