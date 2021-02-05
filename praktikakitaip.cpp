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
    int pirma = vardas.size()+9+4;
    int antra = vardas.size()+9+2;
    int trecia =antra - 1 - vardas.size()- sveikas.size();
    string eilutes[5];
    char simbolis = '*';
    char tarpas = ' ';
    eilutes[0] = string(pirma,simbolis);
    eilutes[1] ="*" + string(antra,tarpas) + "*";
    eilutes[2] ="* "+sveikas+vardas+string(trecia,tarpas)+ "*";
    eilutes[3] = eilutes[1];
    eilutes[4] = eilutes[0];
    for(int i =0; i < 5; i++){
        cout << eilutes[i]<< endl;
    }
    
}