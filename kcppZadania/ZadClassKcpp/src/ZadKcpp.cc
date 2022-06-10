#include <iostream>

using namespace std;

class ZadKcpp{
	public:
		ZadKcpp(){};

		void funkcja1();
		void funkcja2();
		void funkcja3();
		void ZadAryWsk(){
			cout<<"Funckja 1"<<endl<<endl;
			funkcja1();
			cout<<endl<<"Funckja 2"<<endl<<endl;
			funkcja2();
			cout<<endl<<"Funckja 3"<<endl<<endl;
			funkcja3();
		}
		
		int CandCPP();
		
		void funkcjaA(int x);
		void funkcjaB(int x);
		void funkcjaC(int x);
		
		void ZadPar(){
			int x = 0;

			cout << "liczba: ";
			cin >> x;

			funkcjaA(x);
			funkcjaB(x);
			funkcjaC(x);
		}
		
		void funkcjaACase(int x);
		void funkcjaBCase(int x);
		void funkcjaCCase(int x);
		
		void ZadParCase(){
		    int x = 0;
		    char fun; 

		    cout << "liczba: ";
		    cin >> x;
		    
		    cout<<"Funkcja A B lub C: ";
		    cin>>fun;
		    
		    switch(fun){
			case 'A':
			case 'a':
			    funkcjaACase(x);
			    break;
			case 'B':
			case 'b':
			    funkcjaBCase(x);
			    break;
			case 'C':
			case 'c':
			    funkcjaCCase(x);
			    break;
			default:
			    cout<<"Brak takiej funkcji"<<endl;
		    }
		}
		
		void funkcjaAPetle();
		void funkcjaBPetle();
		void funkcjaCPetle();
		
		void ZadPetle(){
			funkcjaAPetle();
			funkcjaBPetle();
			funkcjaCPetle();
		}	
		
};
#include "ZadArytmetykaWskaznikow.h"
#include "ZadCandCPP.h"
#include "ZadParzysta.h"
#include "ZadParzystaCase.h"
#include "ZadPetle.h"
