#include<iostream>
using namespace std; 

int main()
{
    cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? "; 
    int gesamtzahl = 0; 
    cin >> gesamtzahl; 

    cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? "; 
    int anzahl1 = 0; 
    cin >> anzahl1; 

    cout <<"Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? "; 
    int anzahl2 = 0; 
    cin >> anzahl2; 

    int lüsung = gesamtzahl - (anzahl2 + anzahl1); 

    cout << "Auf den dritten Kandidaten sind somit " << lüsung << " Stimmen entfallen." << endl; 
    






    return 0;
}