#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe = "";
	bool eingabe_korrekt = true;

	do {
		eingabe_korrekt = true;
		cout << "Text: ? ";
		getline(cin, eingabe);
		for (int i = 0; i < eingabe.size(); i++) {
			if (int(eingabe.at(i)) < int('a') || int(eingabe.at(i)) > int('z')) {
				eingabe_korrekt = false;
			}
		}

	} while (!eingabe_korrekt);
	bool palindrom = true;
	for (int i = 0; i < eingabe.size() / 2; i++) {
		if (eingabe.at(i) != eingabe.at(eingabe.size() - 1 - i)) {
			palindrom = false;
		}
	}
	if (palindrom) {
		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}
	else {
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}
	system("PAUSE");
	return 0;
}