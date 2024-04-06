#include<bits/stdc++.h>
using namespace std;

class Point{
  private:
    int x;
    int y;

  public:
    Point():x(0), y(0) {}

    Point(int x, int y): x(x), y(y){}
    
    //Friend functions or classes is used to give access of current class all members (inclu. Private) to 
    // other class or function (global).
    friend void showPoint(const Point &P);
};

//This Global function is friend function of class Point, that's why it can access x and y private variables.
void showPoint(const Point &P){
  cout << "(" << P.x << ", " << P.y << ")" << endl;
}

int main(){
  Point p, p2(2,5);
  showPoint(p);
  showPoint(p2);
  cout << sizeof(p);
  return 0;
}