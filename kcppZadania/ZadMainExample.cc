#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void dodawanie(){
	cout<<"2+2=4"<<endl;
}

void duzaLista(){
    int lista[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++){
        cout<<lista[i]<<endl;
    }
}

void losowaLiczba(){
    cout<<"Twoja losowa cyfra to: "<<rand() % 10<<endl;
}

extern "C" void printuj(){
    printf("To jest zdanie w C\n");
}

extern "C" void znak(){
    printf("Podaj znak: ");
    char x = getchar();
    printf("Twoj znak: %c", x);
}

int main(int argc, char *argv[]){
    srand(time(0));
    if(argc==1){
        cout<<"Brak argumentow"<<endl;
        return 0;
    }
    for(int i = 1;i<argc;i++){
    	switch(*argv[i]){
    	    case '1':
    	        dodawanie();
    	        break;
    	    case '2':
    	        duzaLista();
    	        break;
    	    case '3':
    	        losowaLiczba();
    	        break;
    	    case '4':
    	        printuj();
    	        break;
    	    case '5':
    	        znak();
    	        break;
            default:
                cout<<"Nie ma takiej funkcji"<<endl;
                break;
    	}
    }
	return 0;
}
