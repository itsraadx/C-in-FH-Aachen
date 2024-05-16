#include <cctype>
#include <iostream> 
using namespace std; 

int main () 
{ 


char c; 
cout << "Bitte geben Sie den Kleinbuchstaben ein: ? "; 
 
cin >> c; 

char upper_case_c = toupper(c); 

cout << "Der entsprechende Grossbuchstabe lautet: " << upper_case_c << endl; 



return 0; 

}