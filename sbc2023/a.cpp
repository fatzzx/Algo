#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, a, e, count = 0;
  cin >> n >> a;
  for(int i = 0; i < n; i++){
    cin >> e;
    if(a >= e) count++;

  }

  cout << count << endl; 

  return 0;
}