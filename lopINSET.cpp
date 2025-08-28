#include <bits/stdc++.h>
using namespace std;
int main(){
	fstream fi;
	fi.open ("DATA.in");
	int n,m;
	fi >> n >> m;
	int x;
	map <int,int>mp1,mp2;
	while (n--){
		fi >> x;
		mp1[x]++;
	}
	while (m--){
		fi >> x;
		mp2[x]++;
	}
	fi.close();
	for (auto it : mp1){
		if (mp2[it.first])
		cout << it.first <<" ";
	}
	return 0;
}