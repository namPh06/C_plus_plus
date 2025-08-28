#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin >> n >> m;
	vector <pair<long long ,long long >>v(n);
	for (int i = 0;i<n;i++){
		cin >> v[i].first >> v[i].second;
	}
	long long cnt = 0;
	long long ans = 0;
	sort(v.begin(),v.end());
	for (int i=0;i<n;i++){
		long long soluong = v[i].second;
		long long gia = v[i].first;
		if ( cnt + soluong >= m){
			ans += (m - cnt)*gia;
			break;
		}
		else {
			ans += soluong * gia;
			cnt += soluong;
		}
	}
	cout << ans;
	return 0;
}