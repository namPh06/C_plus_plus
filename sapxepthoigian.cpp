#include <bits/stdc++.h>
using namespace std;
struct thoigian {
	int gio;
	int phut;
	int giay;
};
bool cmp(thoigian a ,thoigian b){
	if (a.gio != b.gio)
	return a.gio < b.gio;
	if (a.phut != b.phut)
	return a.phut < b.phut;
	return a.giay < b.giay;
}
int main(){
	int n;
	cin >> n;
	thoigian a[5001];
	for (int i=0;i<n;i++){
		cin >> a[i].gio;
		cin >> a[i].phut;
		cin >> a[i].giay;
	}
	sort (a, a+n ,cmp);
	for (int i=0;i<n;i++){
		cout << a[i].gio <<" "<<a[i].phut << " "<<a[i].giay<<endl;
	}
	return 0;
}