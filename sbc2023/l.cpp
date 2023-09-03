#include <bits/stdc++.h>

using namespace std;

int main(){
  string plvr1;
  vector<int> plvr;
  int temp;
  int k, i = 0, c = 0, l;
  cin >> plvr1;
  for(auto a : plvr1) plvr.push_back(a);
  cin >> k;
  l = plvr.size() - k;
  while(1){
    if(plvr[i] > plvr[i + k]){
      swap(plvr[i], plvr[i+k]);
      c = 0;
    }
    else c++;
    if(c == l) break;
    if(i + k >= plvr.size()) i = 0;
    else i++;
  }
  for(auto a : plvr) cout << (char)a;
  cout << "\n";

  return 0;
}