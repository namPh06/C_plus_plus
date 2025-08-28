#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	vector <int > v;
	map<int,int > mp;
	while (cin >> x){
		v.push_back(x);
		mp[x]++;
	}
	for (int i=0;i<v.size();i++){
		if (mp[x]>=1)
		{
		cout << x <<" ";
	mp[x] = 0;
}
	}
	return 0;
}