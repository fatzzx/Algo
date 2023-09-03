#include <bits/stdc++.h>

using namespace std;

int main(){
  int ener, nc, nr, cont, e;
  cin >> ener >> nc >>  nr;
  int c[nc];
  cont = nr;
  for(int i = 0; i < nc; i++) cin >> c[i];
  for(int i = 0; i < nr; i++){
    cin >> e;
    ener += e;
  }
  for(int e : c){
    if(e <= ener){
      ener -= e;
      cont++;
    } 
    else break;
  }

  cout << cont << endl;


  return 0;
}
