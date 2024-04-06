#include<bits/stdc++.h>
using namespace std;

templace <class T>
class SP{
  private:
    T *ptr;
  public:
    SP(T *p=nullptr):ptr(p){}
    ~SP(){delete ptr;}
    T& operator*(){return *ptr};
    T* operator->(){return ptr}; 
};


int main(){
  
  return 0;
}