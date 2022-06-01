#include <iostream>
using namespace std;

//template<class T>
template<typename T>
class Oprocentowanie{
   
public:
  	Oprocentowanie(const T &x, const T &y) : kwota(x), procent(y) {
		
	}
   
   void PokazKwote(int x) {
	float mnoznik = 1;
	 for(int i=0;i<x;i++){
		cout<<"Miesiac "<<i<<": "<<kwota*mnoznik<<"zl"<<endl;
		mnoznik = mnoznik*(1+(float)procent/100);
	}
   }
   
 private:
   const T kwota;
   const T procent;
};

//---------------------------------------------------
int main() {
	float kwota, procent;
	cout<<"Podaj kwote ";
	cin>>kwota;
	cout<<"Podaj procent ";
	cin>>procent;
	Oprocentowanie<float> ob(kwota,procent);
	cout<<"ile pokazac miesiecy? ";
	int ile;
	cin>>ile;
	ob.PokazKwote(ile);
	return 0;
}
