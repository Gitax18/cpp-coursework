#include <bits/stdc++.h>
using namespace std;

class Data
{
private:
    int x;
    int y;

public:
    Data() : x(0), y(0) {}

    Data(int a, int b) : x(a), y(b) {}

    // This is copy constructor
    /**
     * Here we are passing an Data object by reference (MANDATORY)
     * If we pass by value, then compiler will try to call copy constructor
     * on passed object, and then again will reapeat it recursively.
     * So we'vw to always pass by reference.
     * After it we are passing value of previous object to this object
     * But as this is pointing towards new memory
     * If we modified the values of this copied object, the values of
     * previous object will remain unchanged.
     */
    Data(const Data &obj) : x(obj.x), y(obj.y) {}

    void print()
    {
        cout << "(x, y) : " << x << ", " << y << endl;
    }

    void set(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Data d1;
    d1.print();
    cout << endl;
    Data *dptr = new Data(12, 43);
    cout << "Printing Original Object:" << endl;
    dptr->print();

    Data *newD(dptr);
    // Here we are creating deep copy, so newD is new object with different memory
    newD->set(5, 6);
    cout << "Printing Copied Object:" << endl;
    newD->print();

    // Deleting Dynamic Allocated memory for clean and safe coding
    delete dptr;
    delete newD;

    return 0;
}