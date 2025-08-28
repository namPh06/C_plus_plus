#include <bits/stdc++.h>
using namespace std;
class Time{
	public : 
	    int h , m ,s;
    friend istream &operator >> (istream &in, Time &a){
    	in >> a.h;
    	in >> a.m;
    	in >> a.s;
    	return in;
	}
	friend ostream &operator << (ostream &out, Time a){
		cout << a.h <<" " << a.m <<" "<< a.s << endl;
		return out;
	}
};
bool cmp(Time a,Time b){
	if (a.h != b.h)
	return a.h < b.h;
	else {
		 if (a.m != b.m)
		 return a.m < b.m;
		 return a.s < b.s;
	}
}
int main(){
	int n;
	cin >> n;
	Time a[n];
	for (int i = 0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for (int i = 0;i<n;i++){
		cout << a[i];
	}
	return 0;
}