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
    char fun;

    cout << "liczba: ";
    cin >> x;
    
    cout<<"Funkcja A B lub C: ";
    cin>>fun;
    
    switch(fun){
        case 'A':
        case 'a':
            funkcjaA(x);
            break;
        case 'B':
        case 'b':
            funkcjaB(x);
            break;
        case 'C':
        case 'c':
            funkcjaC(x);
            break;
        default:
            cout<<"Brak takiej funkcji"<<endl;
    }

    return 0;
}