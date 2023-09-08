#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  int n, dist = 0;
  cin >> n;
  vector<int> x(n), y(n);
  for(int &t : x) cin >> t;
  for(int &t : y) cin >> t;
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      dist = max(dist, ((int)pow(x[i]- x[j], 2) + (int)pow(y[i] - y[j], 2)));
    }
  }
  cout << dist << endl;
  return 0;
}