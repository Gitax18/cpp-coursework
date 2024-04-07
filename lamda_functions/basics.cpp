#include<bits/stdc++.h>
using namespace std;
  

int main(){
  auto squareAr = [](int a){return a*a;};
  cout << squareAr(5) << endl;

  int x = 5;
  
  // auto add = [](int a){
  //   return x+a;   // here x is not accessible.
  // };
   

  auto add = [x](int a){  // to access outer variable, we've to pass them in capture list.
   return x+a;
  };

  cout << add(10) << endl;

  return 0;
}