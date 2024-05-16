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

    cout << stundenazahl << ":" << Minutenzahl << " Uhr "  << Sekundenzahl << " Sekunden sind in Sekunden seit Mitternacht: " << num4 << endl; 

    cout <<"\n";
    cout <<"\n";



    cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";  
    int zahl = 0; 
    cin >> zahl; 

    cout <<"Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? "; 
    int zahl2 = 0; 
    cin >> zahl2; 

    cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? "; 
    int zahl3 = 0; 
    cin >> zahl3; 


    double dnum = zahl *60; 
    double dnum2 = dnum * 60; 
    double dnum3 = zahl2 * 60; 
    double dnum4 = dnum2 + dnum3 + zahl3; 

    cout << zahl << ":" << zahl2 << " Uhr "  << zahl3 << " Sekunden sind in Sekunden seit Mitternacht: " << dnum4; 


    return 0; 
}