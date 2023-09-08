#include <bits/stdc++.h>

using namespace std;

int soma(int num){
  int somaAlgs = 0;
  while(num > 0){
    somaAlgs += num % 10;
    num /= 10;
  }
  return somaAlgs;
}

int main(){
  ios_base::sync_with_stdio(0);
  int n, k, e, r, t;
  priority_queue<int> maxHeap;
  cin >> n >> k;
  for(int i = 0; i < n; i++){
    cin >> e;
    maxHeap.push(e);
  }  

  for(int i = 0; i < k; i++){
    t = maxHeap.top();
    r = soma(t);
    maxHeap.pop();
    maxHeap.push(t - r);
  }

  cout << r << endl;

  return 0;
}