#include<bits/stdc++.h>
using namespace std;

int main(){
  int n {5};
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << arr[0-1] << endl;

  for (int i = 0; i < n; i++)
  {
    cout << i+1 << " " << arr[i] << endl;
  }
  
  
  return 0;
}