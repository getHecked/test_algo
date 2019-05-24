#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;
    string temp = "hello";
    int x = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == temp[x]) {
            if (x == temp.length()-1) {
                cout << "YES";
                return 0;
            }

            x++;
        }
    }

    cout << "NO";
}
