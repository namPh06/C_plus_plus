#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a, pair<string,int> b) {
    if (a.first.size() > b.first.size())
    return 1;
    if (a.first.size() == b.first.size()){
    	if (a.first > b.first)
    	return 1;
	}
	return 0;
}
int check(string s) {
    if (s.size() <= 1) return 0;
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    string s;
    map <string,int > mp;
    while (cin >> s){
    	if (check(s))
    	mp[s]++;
	}
vector <pair <string ,int >> v;
for (auto it : mp ){
v.push_back(it);
}
    sort(v.begin(), v.end(), cmp);
    
    for (auto it : mp){
    	cout << it.first <<" "<<it.second<<endl;
	}
	return 0;
}
