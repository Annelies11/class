#include <iostream>

using namespace std;

class data{
	public :
		int n1, n2;
		data(int num1, int num2) {
			n1=num1;
			n2=num2;
			cout<<"Angka telah dimasukkan"<<endl;
		}
		int sum(){
			return n1+n2;
		}
		
		
};

int main() {
	int a, b;
	cout<<"Number 1 : ";
	cin>>a;
	cout<<"Number 2 : ";
	cin>>b;
	data objek(a,b);
	cout<<"jumlah a + b : "<<objek.sum();
}
