#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[500][500];
	for (int i=0;i<n;i++){
		for (int j=0;j<3;j++)
		cin >> a[i][j];
	}
	int cnt = 0;
	for (int i =0;i<n;i++){
		int d = 0, c = 0;
		for (int j=0;j<3;j++){
			if (a[i][j] == 1)
			d++;
			else c++;
		}
		if (d > c)
		cnt++;
	}
	cout << cnt;
	return 0;
}