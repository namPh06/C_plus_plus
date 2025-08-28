#include <bits/stdc++.h>
using namespace std;
struct mathang {
	int id;
    string name;
    string type;
    float giamua;
    float giaban;
    float loinhuan;
};
bool cmp (mathang a, mathang b){
	return a.loinhuan > b.loinhuan;
}
int main(){
	int n;
	cin >> n;
	mathang a[1000];
	for (int i=0;i<n;i++){
		cin.ignore();
		getline (cin,a[i].name);
	
		getline(cin,a[i].type);
		cin >> a[i].giamua;
		cin >> a[i].giaban;
		a[i].loinhuan = a[i].giaban - a[i].giamua;
		a[i].id = i + 1;
	}
	sort (a, a+n,cmp);
	for (int i=0;i<n;i++){
		cout << a[i].id <<" "<<a[i].name <<" "<<a[i].type <<" "<<fixed << setprecision(2)<<a[i].loinhuan << endl;
	}
	return 0;
}