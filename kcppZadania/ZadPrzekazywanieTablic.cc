#include <iostream>
#include <iterator>
using namespace std;

void przekazywanie(int tab[], int rozmiar){
	for(int i=0;i<rozmiar;i++){
		cout<<i<<": "<<tab[i]<<endl;
	}
}

void przekazywanie2(int tab[]){
	int rozmiar = sizeof(tab)/sizeof(int);
        for(int i=0;i<rozmiar;i++){
                cout<<i<<": "<<tab[i]<<endl;
        }
}

int main() {
	int tablica[6] = {9,6,5,4,3,2};
	przekazywanie(tablica,6);
	cout<<"-----------------------------"<<endl;
	przekazywanie2(tablica);
	return 0;
}
