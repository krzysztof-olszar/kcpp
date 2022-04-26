#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main(){
    printf("C:\n");
    
    printf("Napis\n");
    
    char *pNap = "Napis\n";
    printf("%s",pNap);
    
    printf("%c\n",'a');
    
    char znak = 'a';
    printf("%c\n",znak);
    
    printf("\n");
    
    cout<<"C++:"<<endl;
    
    cout<<"Napis"<<endl;
	
	char *pNap2 = "Napis";
	cout<<pNap2<<endl;
	
	cout<<'a'<<endl;
	
	char znak2 = 'a';
	cout << znak2<<endl;
	
	cout<<'\n';
	cout<<endl;
	return 0;
}