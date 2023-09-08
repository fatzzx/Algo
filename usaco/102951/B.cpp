#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  int n, x, count = 0;
  cin >> n >> x;
  deque<int> a(n);
  for(int &t : a) cin >> t;
  sort(a.begin(), a.end());
  while(a.size() > 0){
    if(x < a.front()) break;
    x -= a.front();
    a.pop_front();
    count++;
  }  
  cout << count << endl;
  return 0;
}