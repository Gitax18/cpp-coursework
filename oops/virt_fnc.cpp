#include<bits/stdc++.h>
using namespace std;

class Base{
  public:
    Base(){}
    
    // virtual void print(){ 
    void print(){
      cout << "print from BASE CLASS" << endl;
    }
};

class Derived: public Base{
  public:
    Derived():Base() {}

    void print(){
      cout << "print from DERIVED CLASS" << endl;
    }
};


int main(){
  Base *bptr = new Derived;
  Derived d;
  Base b;
  b.print();
  d.print();

  /*
  * Ideally It should call Derived class print bcz bptr points to derived class
  * But it will call print of Base class because the pointer that is pointing 
  * towards dervied class is of Base class, To get the appropriate result
  * we've to use 'virtual' keyword with print function in Base class.
  * uncomment line 8 and comment line 9.
  */

  bptr = &d;
  bptr->print();

  return 0;
}