#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		int tmp;
		vector < int > v;
	
  while (cin.peek()!='\n'&&cin >> tmp){
  v.push_back(tmp);
  	
  }
		int cnt1 = 0;
		int cnt2 = 0;
		for (int i=0;i<v.size();i++){
			if (v[i]%2==0)
			cnt1 ++;
			else cnt2 ++;
		}
		if ((v.size()%2==0&& cnt1 > cnt2)|| (v.size()%2!=0&&cnt1 < cnt2))
		cout << "YES\n";
		else cout << "NO\n";
		cin.ignore();
	}
	return 0;
}