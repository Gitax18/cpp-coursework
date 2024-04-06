#include<bits/stdc++.h>
using namespace std;

int main(){
  unique_ptr<int> ptr = make_unique<int>(15);
  cout << &ptr;
  return 0;
}