#include<iostream>
using namespace std; 

int main() 
{
    cout <<"Bitte geben Sie die Seitenlaenge ein (in cm): ? "; 
    
    double zahl = 0; 
    cin >> zahl; 

    double incm = 4 * zahl; 

    double incm2 = zahl * zahl; 

    cout << "Der Umfang des Quadrats betraegt (in cm): " << incm << endl
         << "Die Flaeche des Quadrats betraegt (in cm*cm): " << incm2 << endl
         << endl; 




    return 0;
}