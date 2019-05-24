#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    pair<int, int> pr[x];
    for (int i = 0; i < x; i++) {
        cin >> pr[i].first >> pr[i].second;
    }
    sort(pr, pr + x);
    for (int j = 0; j < x - 1; j++) {
        if (pr[j].first < pr[j + 1].first && pr[j].second > pr[j + 1].second) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}