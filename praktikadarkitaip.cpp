#include <iostream>
#include <string>
using namespace std;

int main(){
    string vardas;
    char sveik;
    string sveikas;
    cout << "Kokia jusu lytis?(M ar V)"<< endl;
    cin >> sveik;
    cout << "Iveskite varda" << endl;
    cin >> vardas;
    if(sveik == 'V'){
        sveikas ="Sveikas, ";
    }
    else{
        sveikas ="Sveika, ";
    }
    cout << "Kiek eil?" <<endl;
    int n;
    cin >> n;
    int pirma = vardas.size()+9+4;
    int antra = vardas.size()+9+2;
    int trecia =antra - 1 - vardas.size()- sveikas.size();
    string eilutes[500];
    char simbolis = '*';
    char tarpas = ' ';
    eilutes[0] = string(pirma,simbolis);
    eilutes[n-1] = eilutes[0];
    int puse = n/2;
    for(int q = 1; q<n-1; q++){
        eilutes[q] = "*" + string(antra,tarpas) + "*";
        if(q == puse){
            eilutes[q] ="* "+sveikas+vardas+string(trecia,tarpas)+ "*";
        }
    }
    for(int i =0; i < n; i++){
        cout << eilutes[i]<< endl;
    }
    
}