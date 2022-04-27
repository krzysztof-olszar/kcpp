#include <iostream>

using namespace std;

void funkcja1(){
	int a = 10; int b = 20; int c = 30; int d = 40; int e = 50;
	int *p = &a;
	cout <<"a: "<<a<<"    "<<&a<<endl;
	cout <<"b: "<<b<<"    "<<&b<<endl;
	cout <<"c: "<<c<<"    "<<&c<<endl;
	cout <<"d: "<<d<<"    "<<&d<<endl;
	cout <<"e: "<<e<<"    "<<&e<<endl;
	
	cout <<"*p      "<<*p<<"    "<<p<<endl;
	
	cout <<"p++     "; 
	p++; 
	cout <<*p<<"    "<<p<<endl;
	p--;
	
	cout <<"++p     "; 
	++p; 
	cout <<*p<<"    "<<p<<endl;
	p--;
	
	cout <<"++*p    "; 
	++*p; 
	cout <<*p<<"    "<<p<<endl;
	--*p;
	
	cout <<"++(*p)  "; 
	++(*p); 
	cout <<*p<<"    "<<p<<endl;
	--(*p);
	
	cout <<"++*(p)  "; 
	++*(p); 
	cout <<*p<<"    "<<p<<endl;
	--*(p);
	
	cout <<"*p++    "; 
	*p++; 
	cout <<*p<<"    "<<p<<endl;
	*p--;
	
	cout <<"(*p)++  "; 
	(*p)++; 
	cout <<*p<<"    "<<p<<endl;
	(*p)--;
	
	cout <<"*(p)++  "; 
	*(p)++; 
	cout <<*p<<"    "<<p<<endl;
	*(p)--;
	
	cout <<"*++p    "; 
	*++p; 
	cout <<*p<<"    "<<p<<endl;
	*--p;
	
	cout <<"*(++p)  "; 
	*(++p);
	cout <<*p<<"    "<<p<<endl;
	*(--p);
}

void funkcja2(){ 
	int A[5] = {10,20,30,40,50};
	int *p = A;
	cout <<"A[0]: "<<A[0]<<"    "<<&A[0]<<endl;
	cout <<"A[1]: "<<A[1]<<"    "<<&A[1]<<endl;
	cout <<"A[2]: "<<A[2]<<"    "<<&A[2]<<endl;
	cout <<"A[3]: "<<A[3]<<"    "<<&A[3]<<endl;
	cout <<"A[4]: "<<A[4]<<"    "<<&A[4]<<endl;
	
	cout <<"*p      "<<*p<<"    "<<p<<endl;
	
	cout <<"p++     "; 
	p++; 
	cout <<*p<<"    "<<p<<endl;
	p--;
	
	cout <<"++p     "; 
	++p; 
	cout <<*p<<"    "<<p<<endl;
	p--;
	
	cout <<"++*p    "; 
	++*p; 
	cout <<*p<<"    "<<p<<endl;
	--*p;
	
	cout <<"++(*p)  "; 
	++(*p); 
	cout <<*p<<"    "<<p<<endl;
	--(*p);
	
	cout <<"++*(p)  "; 
	++*(p); 
	cout <<*p<<"    "<<p<<endl;
	--*(p);
	
	cout <<"*p++    "; 
	*p++; 
	cout <<*p<<"    "<<p<<endl;
	*p--;
	
	cout <<"(*p)++  "; 
	(*p)++; 
	cout <<*p<<"    "<<p<<endl;
	(*p)--;
	
	cout <<"*(p)++  "; 
	*(p)++; 
	cout <<*p<<"    "<<p<<endl;
	*(p)--;
	
	cout <<"*++p    "; 
	*++p; 
	cout <<*p<<"    "<<p<<endl;
	*--p;
	
	cout <<"*(++p)  "; 
	*(++p);
	cout <<*p<<"    "<<p<<endl;
	*(--p);
}


void funkcja3(){
	int a = 0;
	int b = 0;
	int c = 0;
	int *wsk_int;
	float x;

	a=0;
	b=0;
	c=0;
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	b = 10; 
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &b;
	*(wsk_int+1) = 20;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &a;
	*(wsk_int+1) = 30;
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&a) = 40; 
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&c - 1) = 50;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*( (int*)&x - 1) = 60;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*)( &x - 2) = 70;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*((int*)&wsk_int - 4) = 80;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*) (&wsk_int - 2) = 90;
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
}

int main(){
	cout<<"Funckja 1"<<endl<<endl;
	funkcja1();
	cout<<endl<<"Funckja 2"<<endl<<endl;
	funkcja2();
	cout<<endl<<"Funckja 3"<<endl<<endl;
	funkcja3();
}