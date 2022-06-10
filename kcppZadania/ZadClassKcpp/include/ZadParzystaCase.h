#include <iostream>
using namespace std;

void ZadKcpp::funkcjaACase(int x){
    if(x&1){
        cout<<"Liczba nieparzysta"<<endl;
    }else{
        cout<<"Liczba parzysta"<<endl;
    }
}

void ZadKcpp::funkcjaBCase(int x){
    if(x%2){
        cout<<"Liczba nieparzysta"<<endl;
    }else{
        cout<<"Liczba parzysta"<<endl;
    }
}

void ZadKcpp::funkcjaCCase(int x){
    cout<<((x%2) ? "Liczba nieparzysta" : "Liczba parzysta")<<endl;
}


