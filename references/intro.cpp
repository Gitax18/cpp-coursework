#include<bits/stdc++.h>
using namespace std;

void fj(int x, string msg = " "){
    cout << msg << x << endl;
}

int main(){
  int x = 40;
  fj(x, "x: ");
  int &ref = x;
  fj(ref, "ref: ");
  ref+=10;
  fj(x, "x: ");
  x+=10;
  fj(ref, "msg: ");
  return 0;
}