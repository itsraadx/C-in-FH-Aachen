#include <iostream>
#include <string>
using namespace std;

int main()
{
	int b;
	int h;
	int k;
	string str;

	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> b;
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> h;

	for (int i = 0; i < h; i++)
	{
		for (k = 0; k < i; k++)
		{
			str = str + ".";
		}
		for (int n = 0; n < b; n++)
		{
			str = str + "*";
		}

		if (i > 0 && i < h - 1)
		{
			for (int m = k; m < b + i - 2; m++)
			{
				str.at(m + 1) = char(43);
			}
		}

		cout << str << endl;
		str = "";
	}

	cout << endl;

	system("PAUSE");
	return 0;
}