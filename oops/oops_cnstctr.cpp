#include<bits/stdc++.h>
using namespace std;

class Data{
    private:
        int x;
        int y;
    public:
        Data(): x(0), y(0){}
        
        Data(int a, int b): x(a), y(b){}

        void print(){
            cout << "(x, y) : " << x << ", " << y << endl;
        }

};

int main(){
  Data d1;
  d1.print();
  cout << endl;
  Data *dptr = new Data(12, 43);
  dptr -> print();

  /**
   * Here we are creating a new Object from above created object.
   * This will make deep copy of object *dptr to *newD
   * *newD object pointer will point to same location as of *dptr
   * This because when we not create our own copy constructor in class,
   * Compilere create it by itself and that created object points to same memory
   * as of object from where it is copied.
   * So to make DEEP COPY, we've to make our own copy constructor in class.
   * I am making deep copy constructor in next file "oops_dp_cnstctr.cpp"
  */
  Data *newD(dptr);
  newD->print();

  return 0;
}