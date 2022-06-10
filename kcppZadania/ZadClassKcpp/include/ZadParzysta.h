#include <iostream>
using namespace std;

void ZadKcpp::funkcjaA(int x){
    if(x&1){
        cout<<"Liczba nieparzysta"<<endl;
    }else{
        cout<<"Liczba parzysta"<<endl;
    }
}

void ZadKcpp::funkcjaB(int x){
    if(x%2){
        cout<<"Liczba nieparzysta"<<endl;
    }else{
        cout<<"Liczba parzysta"<<endl;
    }
}

void ZadKcpp::funkcjaC(int x){
    cout<<((x%2) ? "Liczba nieparzysta" : "Liczba parzysta")<<endl;
}
