#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		int dem = 0;
		while (1){
			for (int i=0;i<n;i++){
				if (a[i] % 2 != 0){
					a[i]--;
					dem++;
				}
			}
			bool check = true;
			for (int i=0;i<n;i++){
				if(a[i]!=0)
				{
					check = false;
					break;
				}
			}
			if (check == true)
			break;
			for(int i=0;i<n;i++){
				if (a[i] % 2 == 0){
					a[i] /=2;
				}
			}
			dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
