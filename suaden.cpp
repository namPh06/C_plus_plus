#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,b;
	cin >> n >> k >> b;
	vector <int > v(n+1,0);
	for (int i=0;i<b;i++){
		int x;
		cin >> x;
		v[x]=1;
	}
	int cnt = 0;
	for (int i=1;i<=k;i++){
		cnt += v[i];
	}
	int min_cnt = cnt;
	for (int i=k+1;i<=n;i++){
		cnt += v[i]-v[i-k];
		min_cnt = min(min_cnt,cnt);
	}
	cout << min_cnt ;
	return 0;
}