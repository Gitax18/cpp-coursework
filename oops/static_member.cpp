#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    static int studentCount;
    string name;
    int cls;
    Student(): name(""), cls(0){studentCount++;}

    Student(string nm, int cl): name(nm), cls(cl){studentCount++;}
    static int noOfStu()
    {
      return studentCount;
    } 

    ~Student(){studentCount--;}
};

int Student::studentCount = 0;

int main(){
  Student s1, s2;

  {
    Student *s4 = new Student();
    cout << Student::noOfStu() << endl;
    delete s4;
  }
  cout << Student::noOfStu() << endl;

  return 0;
}