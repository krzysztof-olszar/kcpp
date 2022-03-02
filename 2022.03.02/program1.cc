#include <iostream>
using namespace std;

int funkcja(){
	int wynik;
	int a = 1;
	int b = 2;
	wynik = a+b;
	return wynik;
}


int main(){
	int x;
	cout<<x<<endl;
	x=20;
	cout<<x<<endl<<endl;

	bool b;
	cout<<b<<endl;
	b=true;
	cout<<b<<endl<<endl;

	cout<<"WYNIK:"<<funkcja()<<endl;
	return 1;
}
