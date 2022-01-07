#include <iostream>

using namespace std;

class murid {
	public:
		string name;
		int ni1, ni2;
		murid(string n, int n1, int n2) {
			name=n;
			ni1=n1;
			ni2=n2;
		}
		
		int mean() {
			return (ni1+ni2)/2;
		}
		
		void show() {
			cout<<"Nama : "<<name<<endl;
			cout<<"Nilai 1 : "<<ni1<<endl;
			cout<<"Nilai 2 : "<<ni2<<endl;
			cout<<"Rata-rata : "<<mean()<<endl;
		}
	
};

int main() {
	int n1, n2;
	string nama;
	cout<<"Nama : ";
	cin>>nama;
	cout<<"Nilai 1 : ";
	cin>>n1;
	cout<<"Nilai 2 : ";
	cin>>n2;
	murid aris(nama, n1, n2);
	aris.show();
	
	return 0;
}
