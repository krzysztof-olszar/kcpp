#include <iostream>
using namespace std;

void funkcjaA(){//while
    cout<<"------while i++------"<<endl;
    int i=0;
    while(i<10){
        cout<<i++<<endl;
    }
    cout<<"------while ++i------"<<endl;
    i=0;
    while(i<10){
        cout<<++i<<endl;
    }
}

void funkcjaB(){//do-while
    cout<<"------do-while i++------"<<endl;
    int i=0;
    do{
        cout<<i++<<endl;
    }while(i<10);
    cout<<"------do-while ++i------"<<endl;
    i=0;
    do{
        cout<<++i<<endl;
    }while(i<10);
}

void funkcjaC(){//for
    cout<<"------for i++------"<<endl;
    for(int i=0;i<10;i++){
        cout<<i<<endl;
    }
    cout<<"------for ++i------"<<endl;
    for(int i=0;i<10;++i){
        cout<<i<<endl;
    }
}

int main(){
    
    funkcjaA();

    funkcjaB();

    funkcjaC();


    return 0;
}