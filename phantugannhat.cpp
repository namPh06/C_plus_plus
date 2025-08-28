#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector <int > a(n);
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int k,x;
		cin >> k >> x;
		int index;
		for (int i = 0;i<n;i++){
			if (a[i]==x)
			{
			index = i;
			break;}
		}

		for (int i= index - (k/2);i<index ;i++){
			cout << a[i] << " ";
		}
		for (int i=index +1;i<= index + (k/2);i++){
			cout << a[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}