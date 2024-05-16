#include<iostream>
using namespace std; 

int main()
{
    cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? "; 
    double gesamtzahl = 0; 
    cin >> gesamtzahl; 

    cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? "; 
    double anzahl1 = 0; 
    cin >> anzahl1; 

    cout <<"Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? "; 
    int anzahl2 = 0; 
    cin >> anzahl2; 

    double lüsung = gesamtzahl - (anzahl2 + anzahl1); 

    cout << "Auf den dritten Kandidaten sind somit " << lüsung << " Stimmen entfallen." << endl; 
    
    
    double percentage = (anzahl1 * 100) / gesamtzahl; 
    cout <<"Kandidat 1 erhielt " << percentage << "% der Stimmen." << endl; 

    double percentage2 = (anzahl2 * 100) / gesamtzahl; 
    cout <<"Kandidat 2 erhielt " << percentage2 <<"% der Stimmen." << endl;  

    double percentage3 = (lüsung * 100) / gesamtzahl; 
    cout << "Kandidat 3 erhielt " << percentage3 << "% der Stimmen." << endl;



    return 0;
}