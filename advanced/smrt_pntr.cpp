#include<bits/stdc++.h>
using namespace std;

template <class T>
class SP{
  private:
    T *ptr;
  public:
    SP(T *p=nullptr):ptr(p){}
    ~SP(){delete ptr;}
    T& operator*(){return *ptr;}
    T* operator->(){return ptr;} 
};


int main(){
  SP<int> sp(new int(5));

  cout << *sp;
  
  return 0;
}