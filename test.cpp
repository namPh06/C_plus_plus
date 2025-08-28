#include <bits/stdc++.h>
using namespace std;
vector <string > v1;
void tach(string &s){
    stringstream ss(s);
    string token;
    while (ss >> token){
        v1.push_back(token);
    }
}
int main(){
    string s;
    stack <int> st;
    while (getline (cin,s)){
        tach(s);
        if (v1[0] == "push")
        st.push(stoi(v1[0]));
        else if (v1[0] == "show"){
        while (!st.empty()){
            cout << st.top()<<" ";
            st.pop();
        }
    }
        else st.pop();
        cout << endl;
    }
    return 0;
}