#include<bits/stdc++.h>
using namespace std;

int main(){
  string data;
  getline(cin,data);
  ofstream myFile("file_handling/myfile.txt");
  myFile << data;
  cout << "Data added";

  myFile.close();
  return 0;
}