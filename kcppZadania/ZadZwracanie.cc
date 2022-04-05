#include <iostream>
using namespace std;
int g=0;
int t[1];
int zwracanieWartosc(){
    int x = 8;
	return x;
}

int &zwracanieReferencja(){
	return g;
}

int *zwracanieWskaznik(){
    int x = 31;
    int *y;
    y=&x;
	return y;
}

int * zwracanieTablica(){
    t[0] = 40;
	return t;
}

int main() {
    int a;
    int b;
    int *c;
    int *d;
    a = zwracanieWartosc();
    zwracanieReferencja()=20;
	b = zwracanieReferencja();
	c = zwracanieWskaznik();
	d = zwracanieTablica();
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
    cout<<d<<" "<<*d<<endl;
	return 0;
}