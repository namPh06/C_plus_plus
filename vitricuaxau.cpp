#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	vector <int> v;
	int index = a.find(b);
	while (index!= string :: npos){
		v.push_back(index + 1);
		index = a.find(b,index+1);
	}
	for (int x : v){
		cout << x <<" ";
	}
	return 0;
}