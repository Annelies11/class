#include <iostream>

using namespace std;

class persegi {
	public:
		int x, y;
		int hitung() {
			return x*y;
		}
};

int main() {
	persegi kotak1;
	cout<<"Panjang sisi : ";
	cin>>kotak1.x;
	cout<<"Panjang sisi : ";
	cin>>kotak1.y;
	cout<<"Luas : "<<kotak1.hitung();
}
