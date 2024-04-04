#include<bits/stdc++.h>
using namespace std;

int main(){
  string s[] = {"hello", "world", "it's Gfg"};

  // is it same as call by reference
  for(int i = 0; i < 3; i++)
  {
    s[i]+=" - new string here";
    cout << s[i] << endl;
  }  

  return 0;
}