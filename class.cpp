#include <bits/stdc++.h>
using namespace std;
class Simple{
private:
	int m_nID;
public :
    Simple (int nID) : m_nID ( nID){
	 cout << "Constructing Simple" << nID << endl;
	}	
	~Simple(){
		cout << "Destructing Simple" << m_nID << endl;
	}
	int getID(){
		return m_nID;
	}
};
int main(){
	Simple simple (1);
	cout << simple.getID() << endl;
	Simple *pSimple (new Simple (2));
	cout << pSimple -> getID() << endl;
	delete pSimple;
	return 0;
}