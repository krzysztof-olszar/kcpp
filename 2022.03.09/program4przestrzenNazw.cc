#include <iostream>
#include <typeinfo>
using namespace std;

namespace mojaPrzestrzen
{
	int x=4;
}

int main(){
	int  x = 1;
	cout<<"x normalnie: "<<x<<endl;
	cout<<"x z innej przestrzeni: "<<mojaPrzestrzen::x<<endl;
}
