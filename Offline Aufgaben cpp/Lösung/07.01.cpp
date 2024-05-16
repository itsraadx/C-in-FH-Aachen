#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string padded(const string& to_pad, size_t amount) {
    string str;
    for (size_t i = 0; i < amount; ++i)
        str += '#'; // padding char won't change
    return str + to_pad;
}

int main() {

    vector<string> strings;
    size_t max_len{ 0 };

    for (int i = 0; i < 4; ++i) {
        string s;
        cout << "Textzeile = ? ";
        getline(cin, s);
        
        if (s.empty())
            break;
        if (s.size() > max_len)
            max_len = s.size();
        strings.push_back(s);
    }

    for (const string& s : strings)
        cout << padded(s, max_len - s.size()) << endl;
}