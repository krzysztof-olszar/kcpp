#include <iostream>
#include "ZadKcpp.cc"
using namespace std;

int main(){
	ZadKcpp obj;
	int menu;
	cout<<"1-wskazniki 2-porownanie c i c++ 3-parzystosc 4-parzystosc ale w case 5-petle"<<endl;
	cin>>menu;
	while(menu>=1 && menu<=5){
		switch(menu){
			case 1:
				obj.ZadAryWsk();
				break;
			case 2:
				obj.CandCPP();
				break;
			case 3:
				obj.ZadPar();
				break;
			case 4:
				obj.ZadParCase();
				break;
			case 5:
				obj.ZadPetle();
				break;
		}
		cout<<"1-wskazniki 2-porownanie c i c++ 3-parzystosc 4-parzystosc ale w case 5-petle"<<endl;
		cin>>menu;
	}
	return 0;
}
