#ifndef ROWNANIA_H_INCLUDED
#define ROWNANIA_H_INCLUDED



#endif // ROWNANIA_H_INCLUDED
//using namespace std;

class Rownania{
    public:
        int ilosc=0;

        Rownania(string linijka){
            string split;
            stringstream X(linijka);
            while(getline(X, split, '\n')) {
                cout << split << endl;
                this->ilosc++;
            }
            cout<<endl;
            linijki = new string[ilosc];
            stringstream Y(linijka);
            int i=0;
            while(getline(Y, split, '\n')) {
                linijki[i++] = split;
            }
            znaki = new char[ilosc];
            wyniki = new float[ilosc];
            wartosci = new int[ilosc*2*(ilosc+1)]{0};//odpowiednio: rzad, lewa/prawa strona, która zmienna
            wyszukajZnaki();
            rozbior();
        }


        Rownania(int x){
            this->ilosc = x;
            linijki = new string[ilosc];
            znaki = new char[ilosc];
            wyniki = new float[ilosc];
            wartosci = new int[ilosc*2*(ilosc+1)]{0};//odpowiednio: rzad, lewa/prawa strona, która zmienna
            wpiszLinijki();
            wyszukajZnaki();
            rozbior();
        }
        void debug(){
            cout<<"Linijki:"<<endl;
            for(int i=0;i<this->ilosc;i++){
                cout<<linijki[i]<<endl;
            }
            cout<<"---"<<endl<<"Znaki:"<<endl;
            for(int i=0;i<this->ilosc;i++){
                cout<<znaki[i]<<endl;
            }

            for(int i=0;i<ilosc;i++){
                for(int j=0;j<2;j++){
                    for(int k=0;k<ilosc+1;k++){
                        cout<<*getWartosc(i,j,k)<<" ";
                    }
                    if(j==0){
                        cout<<": ";
                    }
                }
                cout<<endl;
            }

            for(int i=0;i<ilosc;i++){
                cout<<znaki[i]<<":"<<wyniki[i]<<endl;
            }
        }

        void rozwiaz(){
            //wszystkie zmienne na lewo, wartosci na prawo
            for(int i=0;i<this->ilosc;i++){
                for(int j=0;j<this->ilosc;j++){
                    ustawWartosc(getWartosc(i,0,j),*getWartosc(i,0,j)-*getWartosc(i,1,j));
                    ustawWartosc(getWartosc(i,1,j),0);
                }
                ustawWartosc(getWartosc(i,1,this->ilosc),*getWartosc(i,1,this->ilosc)-*getWartosc(i,0,this->ilosc));
                ustawWartosc(getWartosc(i,0,this->ilosc),0);
            }
            //policzyc wyznacznik
            int *macierz = new int[ilosc*ilosc]{0};
            for(int i=0;i<ilosc;i++){
                for(int j=0;j<ilosc;j++){
                    macierz[i*ilosc+j] = *getWartosc(i,0,j);
                }
            }
            int wyznacznikWartosc = wyznacznik(macierz,ilosc);
            delete macierz;
            //cout<<"WYZNACZNIK TO: "<<wyznacznikWartosc<<endl;
            if(wyznacznikWartosc==0){
                //cout<<"Nie da sie rozwiazac tego rownania"<<endl;
                daSieRozwiazac = false;
                return;
            }
            for(int x=0;x<ilosc;x++){
                int *macierz = new int[ilosc*ilosc]{0};
                for(int i=0;i<ilosc;i++){
                    for(int j=0;j<ilosc;j++){
                        macierz[i*ilosc+j] = *getWartosc(i,0,j);
                    }
                }
                //zamien kolumne
                for(int i=0;i<ilosc;i++){
                    macierz[i*ilosc+x]=*getWartosc(i,1,ilosc);
                }
                //cout<<"Po lewej:"<<wyznacznik(macierz,ilosc)<<"Wyznacznik:"<<wyznacznikWartosc<<endl;
                wyniki[x] = (float)wyznacznik(macierz,ilosc)/(float)wyznacznikWartosc;
                delete macierz;
            }
        }

        void pokaz(){
            if(!daSieRozwiazac){
                cout<<"Nie da sie rozwiazac tego rownania"<<endl;
                return;
            }
            for(int i=0;i<ilosc;i++){
                cout<<znaki[i]<<" = "<<wyniki[i]<<endl;
            }
        }

    private:
        string *linijki;
        char *znaki;
        float *wyniki;
        int *wartosci;
        bool daSieRozwiazac = true;

        void wpiszLinijki(){
            for(int i=0;i<this->ilosc;i++){
                cin>>linijki[i];
            }
            cout<<endl;
        }

        void wyszukajZnaki(){
            int licznik=0;
            for(int i=0;i<this->ilosc;i++){
                string temp = linijki[i];
                string dozwolone = "qwertyuiopasdfghjklzxcvbnm";
                for(unsigned int j=0;j<temp.length();j++){
                    if(dozwolone.find(temp[j])!=string::npos){
                        if(string(znaki).find(temp[j])!=string::npos){
                            continue;
                        }
                        if(licznik>=this->ilosc){
                            cout<<"Za duzo znakow!"<<endl;
                            return;
                        }
                        znaki[licznik] = temp[j];
                        licznik++;
                    }
                }
            }
            if(licznik<this->ilosc){
                cout<<"Za malo znakow!"<<endl;
                daSieRozwiazac = false;
                return;
            }
        }

        void rozbior(){
            for(int i=0;i<this->ilosc;i++){
                string temp = linijki[i];
                string dozwolone = "qwertyuiopasdfghjklzxcvbnm";
                string cyfry = "0123456789";
                char znak = '+';
                int numerZnaku = this->ilosc;
                string liczba = "";
                bool prawaStrona = 0;
                //musi znalezc '=' inaczej to nie jest rownanie
                if(temp.find('=')==string::npos){
                    cout<<"Zle napisane rownanie"<<endl;
                    daSieRozwiazac = false;
                    return;
                }

                for(unsigned int j=0;j<temp.length();j++){
                    if(dozwolone.find(temp[j])!=string::npos){
                        numerZnaku = string(znaki).find(temp[j]);
                    }else if(temp[j]=='+'){
                        if(liczba==""){
                            liczba = "1";
                        }
                        ustawWartosc(getWartosc(i,prawaStrona,numerZnaku),znak,liczba);
                        numerZnaku = this->ilosc;
                        znak = '+';
                        liczba = "";
                    }else if(temp[j]=='-'){
                        if(liczba=="" && j==0){
                            znak = '-';
                            continue;
                        }else if(temp[j-1]=='='){
                            znak = '-';
                            continue;
                        }else if(liczba==""){
                            liczba = "1";
                        }

                        ustawWartosc(getWartosc(i,prawaStrona,numerZnaku),znak,liczba);
                        numerZnaku = this->ilosc;
                        znak = '-';
                        liczba = "";
                    }else if(cyfry.find(temp[j])!=string::npos){
                        liczba += temp[j];
                    }else if(temp[j]=='='){
                        if(liczba==""){
                            liczba = "1";
                        }
                        ustawWartosc(getWartosc(i,prawaStrona,numerZnaku),znak,liczba);
                        numerZnaku = this->ilosc;
                        znak = '+';
                        liczba = "";
                        prawaStrona = 1;
                    }
                }
                if(liczba=="" && numerZnaku!=this->ilosc){
                    liczba = "1";
                }
                ustawWartosc(getWartosc(i,prawaStrona,numerZnaku),znak,liczba);
            }
        }

        int* getWartosc(int i, int j, int k){
            return &this->wartosci[i*2*(ilosc+1) + j*(ilosc+1) + k];
        }

        void ustawWartosc(int* gdzie, char znak, string wartosc){
            stringstream ss(wartosc);
            ss>>*gdzie;
            if(znak=='-'){
                *gdzie = -*gdzie;
            }
        }

        void ustawWartosc(int* gdzie, int wartosc){
            *gdzie=wartosc;
        }

        int wyznacznik(int *macierz, int n){
            if(n==1){
                return *macierz;
            }else{
                int *podmacierz = new int[(n-1)*(n-1)]{0};
                int det=0;
                int znak=1;
                for(int kolumna=0;kolumna<n;kolumna++){
                    int p=0,q=0;
                    for(int i=1;i<n;i++){
                        for(int j=0;j<n;j++){
                            if(j!=kolumna){
                                podmacierz[p*(n-1)+(q++)] = macierz[i*n+j];
                                if (q % (n - 1) == 0) {
                                    p++;
                                    q = 0;
                                }
                            }
                        }
                    }
                    det = det + macierz[kolumna]*wyznacznik(podmacierz,n-1)*znak;
                    znak = -znak;
                }
                delete podmacierz;
                return det;
            }
        }

};
