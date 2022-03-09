#include <iostream>
#include <typeinfo>
using namespace std;

typedef int mojint;
typedef float mojfloat;
typedef double mojdouble;

int main(){
	mojint x = 1;
	mojfloat y = 2.3;
	mojdouble z = 3.14;
	cout<<"int: "<<x<<endl;
	cout<<"float: "<<y<<endl;
	cout<<"double: "<<z<<endl;
}
