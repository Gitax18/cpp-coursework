#include<bits/stdc++.h>
using namespace std;

class A{
  public:
    int a, b;
    A(int x, int y):a(x), b(y) {}

    int fun(){return a+b;}

};


int main(){
  /* UNIQUE POINTERS
  
  unique_ptr<A> ptr = make_unique<A>(1, 5);
  cout << ptr->fun();

  unique_ptr<A> ptr2;
  // ptr2 = ptr; <-- Wont work, unique pointer is always unique and deletes automatically
  */



  /* SHARED POINTERS
  shared_ptr<A> ptr = make_shared<A>(1, 5);
  cout << ptr->fun();

  shared_ptr<A> ptr2;
  ptr2 = ptr; <- It will work, becase the object can be shared between multiple pointers

  cout << ptr2->fun();



  shared_ptr<int> ptr = make_shared<int>(5);
  cout << *ptr << endl;

  shared_ptr<int> ptr2;
  ptr2 = ptr; // <- It will work, becase the object can be shared between multiple pointers

  cout << *ptr2 << endl;

  cout<< ptr.use_count() << endl; // 2 bcz there are two pointers (ptr and ptr2) pointing to object at ptr.

  
  ptr2.reset(); // deleting shared pointer p2, no more refering to any object;

  cout << *ptr << endl;
  cout<< ptr.use_count() << endl; // 2 bcz there are two pointers (ptr and ptr2) pointing to object at ptr.
  */


 



  return 0;
}