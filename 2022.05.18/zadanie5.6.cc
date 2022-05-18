/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief Klasy: Metody abstrakcyjne w C++
 * v0.02
 */

#include <iostream>
using namespace std;


//------------------------------------------------------------------
class Figura
{   
 public:
   virtual void Narysuj() = 0;
   virtual float Pole()=0;   
   virtual float Obwod()=0;
};
//------------------------------------------------------------------




//------------------------------------------------------------------
class Trojkat : public Figura 
{  
 public:
   int a,h;
   Trojkat(int x1,int x2){
	a=x1;
	h=x2;
}
   void Narysuj() {
      cout << "Przepis na narysowanie trojkata" << endl;
   }
   float Pole(){
	return a*h/2;
}

 float Obwod(){return 0;}

};

//------------------------------------------------------------------
class Kwadrat : public Figura 
{  
 public:
	int a;
        Kwadrat(int x1){
                a=x1;
        }
float Pole(){
        return a*a;
}

float Obwod(){return 4*a;}


   void Narysuj() {
      cout << "Przepis na narysowanie kwadrata" << endl;
   }
};

//------------------------------------------------------------------
class Prostokat : public Figura 
{  
 public:
	int a,b;
	Prostokat(int x1,int x2){
        	a=x1;
        	b=x2;
	}
float Pole(){
        return a*b;
}

float Obwod(){return 2*a+2*b;}

   void Narysuj() {
      cout << "Przepis na narysowanie prostokata" << endl;
   }
};

class Kolo : public Figura 
{  
 public:
        int r;
        Kolo(int x1){
                r=x1;
        }
float Pole(){
        return 3.14*r*r;
}

float Obwod(){return 2*3.14*r;}

   void Narysuj() {
      cout << "Przepis na narysowanie prostokata" << endl;
   }
};


//------------------------------------------------------------------
int main()
{ 
   //Kwadrat *objKwadrat = new Kwadrat();
   Figura *trojkat = new Trojkat(2,3);
   cout<<trojkat->Pole()<<endl;
   cout<<trojkat->Obwod()<<endl;
  
Figura *kwadrat = new Kwadrat(2);
   cout<<kwadrat->Pole()<<endl;  
   cout<<kwadrat->Obwod()<<endl;


Figura *prostokat = new Prostokat(2,3);
   cout<<prostokat->Pole()<<endl;  
cout<<prostokat->Obwod()<<endl;


Figura *kolo = new Kolo(2);
   cout<<kolo->Pole()<<endl;  
cout<<kolo->Obwod()<<endl;

  //Figura fig;    //ERROR
  //Figura *fig = new Figura();    //ERROR
}

