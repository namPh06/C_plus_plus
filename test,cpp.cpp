#include <bits/stdc++.h>
using namespace std;
void backtrack (vector <vector<int >>&v, int a[] , int n){
    if ( n < 1)
    return;
    int tmp[20];
    for (int i = 0 ; i< n - 1; i++){
        tmp[i] = a[i] + a[i+1];
    }
    v.push_back (tmp);
    backtrack (v,a,n-1);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[20];
        for (int i = 0 ; i< n ; i++){
            cin >>  a[i];
        }
     vector < vector <int>> v;
     backtrack(v,a,n);
     for (int i = v.size() - 1; i >= 0 ; i--){
        cout << "[";
        for (int j = 0 ; j < v[i].size() ; j++){
            if (j > 0) cout <<" ";
            cout << v[i][j];
        }
        cout <<"]";
     }   
     cout <<"[";
     for (int i = 0 ; i< n ; i++){
        if (i > 0 )
        cout <<" ";
        cout << a[i];
     }
     cout <<"]";
     cout << endl;
    }
    return 0;
}