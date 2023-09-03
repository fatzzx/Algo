#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortFunc(char a, char b) {
    return a > b;
}

int main() {
    string plvr;
    int k;
    cin >> plvr;
    cin >> k;
    
    int n = plvr.size();
    vector<vector<char>> v(k);
    vector<int> counts(k, 0);

    for (int i = 0; i < n; i++) {
        v[i % k].push_back(plvr[i]);
        counts[i % k]++;
    }
    for (int i = 0; i < k; i++) {
        sort(v[i].begin(), v[i].end(), sortFunc);
    }
    plvr = "";
    int j = 0;

    while (plvr.size() < n) {
        if (counts[j] > 0) {
            plvr += v[j].back();
            v[j].pop_back();
            counts[j]--;
        }
        j = (j + 1) % k;
    }
    cout << plvr << endl;
    return 0;
}
