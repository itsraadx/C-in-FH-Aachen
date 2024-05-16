#include <iostream>
#include <string>
using namespace std;

char* my_strconcat(const char* ptr1, const char* ptr2);

int main() {
    cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    string s1;
    getline(cin, s1);

    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    string s2;
    getline(cin, s2);

    cout << "Ergebnis my_strconcat(): " << my_strconcat(s1.data(), s2.data()) << endl;

    return 0;
}

size_t cstrlen(const char* str) {
    size_t s;
    for (s = 0; str[s] != 0; ++s)
        ;
    return s;
}

char* my_strconcat(const char* ptr1, const char* ptr2) {
    char* res = new char[cstrlen(ptr1) + cstrlen(ptr2) + 1];
    size_t i;
    for (i = 0; ptr1[i] != 0; ++i) {
        res[i] = ptr1[i];
    }

    for (size_t k = 0; ptr2[k] != 0; ++k) {
        res[i + k] = ptr2[k];
    }

    res[cstrlen(ptr1) + cstrlen(ptr2)] = 0;
    return res;
}