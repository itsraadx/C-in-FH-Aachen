#include<iostream>
using namespace std; 

int main ()
{
    cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? "; 
    double stundenazahl = 0; 
    cin >> stundenazahl;  

    cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? "; 
    double Minutenzahl = 0; 
    cin >> Minutenzahl; 

    cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? "; 
    double Sekundenzahl = 0; 
    cin >> Sekundenzahl; 

    double num1 = stundenazahl * 60;  
    double num2 = num1 * 60; 
    double num3 = Minutenzahl * 60; 
    double num4 = num2 + num3 + Sekundenzahl; 

    cout << stundenazahl << ":" << Minutenzahl << " Uhr "  << Sekundenzahl << " Sekunden sind in Sekunden seit Mitternacht: " << num4;




    return 0; 
}