#include<bits/stdc++.h>
using namespace std;

class Complex{
  private:
    int real;
    int img;
  public:
    // empty constructor function
    Complex():real(0), img(0){}

    // constructor function
    Complex(int real, int img){
      this->real = real;
      this->img = img;
    }
    
    // copy constructor
    Complex(Complex &comp):real(comp.real), img(comp.img){}

    // printing complex number
    void printNo(){
      cout << this->real << "+" << img << "i"<<endl;
    }

    // creating function to add complex number
    Complex add(Complex &comp1, Complex &comp2){
      this->real = comp1.real + comp2.real;
      this->img = comp1.img + comp2.img;

      Complex ans(real, img);
      return ans;
    }

};

int main(){
  Complex c1(4,7);
  Complex c2(5,2);
  Complex c3;
  c3.add(c1, c2);
  c1.printNo();
  c2.printNo();
  c3.printNo();

  return 0;
}