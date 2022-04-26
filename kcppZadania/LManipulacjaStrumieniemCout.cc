#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main(){
    float a=61.232112321,b=4.534223,c=3.1415999999,srednia;
    srednia = (a+b+c)/3;
    
    cout<<"Wynika naszego działania: x.xxxxx jest niepoprawny ale:"<<endl;
    cout<<"Output: "<<setprecision(5)<<setw(8)<<a<<"   T: "<<setprecision(4)<<setw(6)<<a/10<<endl;
    cout<<"Output1: "<<setprecision(5)<<setw(8)<<b<<"  T: "<<setprecision(7)<<setw(8)<<b*10<<endl;
    cout<<"Output2: "<<setprecision(5)<<setw(8)<<c<<"  T: "<<setprecision(8)<<setw(9)<<c*10<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"average: "<<setprecision(6)<<setw(8)<<srednia<<"  T: "<<setprecision(8)<<setw(9)<<(a/10+10*b+10*c)/3<<endl;
	return 0;
}