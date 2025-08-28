#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}
int id = 0;
class Tuyensinh{
    private:
        string name, dantoc;
        float diem;
        int khuvuc;
    public:
        string ma;
        string newname;
        float diemmoi;
        friend istream& operator>>(istream &in, Tuyensinh &a){
            id++;
            in.ignore(); 
            getline(in, a.name);
            in >> a.diem;
            in.ignore();
            getline(in, a.dantoc);
            in >> a.khuvuc;

            stringstream ss(a.name);
            string token;
            vector<string> v;
            while (ss >> token){
                chuanhoa(token);
                a.newname += token + " ";
            }
            a.newname.pop_back();
            string s = to_string(id);
            while (s.size() < 2) s = "0" + s;
            a.ma = "TS" + s;
			a.diemmoi = a.diem;
            if (a.khuvuc == 1) a.diemmoi += 1.5;
            else if (a.khuvuc == 2) a.diemmoi += 1;
            if (a.dantoc != "Kinh") a.diemmoi += 1.5;
            return in;
        }
        friend ostream& operator<<(ostream &out, Tuyensinh a){
            out << a.ma << " " << a.newname <<" "<< fixed << setprecision(1) << a.diemmoi << " ";
            if (a.diemmoi >= 20.5)
                out << "Do" << endl;
            else
                out << "Truot" << endl;
            return out;
        }
};
bool cmp(Tuyensinh a, Tuyensinh b){
    if (a.diemmoi != b.diemmoi)
        return a.diemmoi > b.diemmoi;
    return a.ma < b.ma;
}
int main(){
    int n;
    cin >> n;
    Tuyensinh ds[n];
    for (int i = 0; i < n; i++){
        cin >> ds[i];
    }
    sort(ds, ds + n, cmp);
    for (int i = 0; i < n; i++){
        cout << ds[i];
    }
    return 0;
}
