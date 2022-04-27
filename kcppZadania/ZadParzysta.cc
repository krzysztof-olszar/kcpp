#include <iostream>
using namespace std;

void funkcjaA(int x){
    if(x&1){
        cout<<"Liczba nieparzysta"<<endl;
    }else{
        cout<<"Liczba parzysta"<<endl;
    }
}

void funkcjaB(int x){
    if(x%2){
        cout<<"Liczba nieparzysta"<<endl;
    }else{
        cout<<"Liczba parzysta"<<endl;
    }
}

void funkcjaC(int x){
    cout<<((x%2) ? "Liczba nieparzysta" : "Liczba parzysta")<<endl;
}


int main()
{

    int x = 0;

    cout << "liczba: ";
    cin >> x;

    funkcjaA(x);

    funkcjaB(x);

    funkcjaC(x);

    return 0;
}