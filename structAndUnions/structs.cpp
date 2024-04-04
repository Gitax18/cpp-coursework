#include<bits/stdc++.h>
using namespace std;

typedef struct Student{
    int rollno;
    string name;
    char grade;
}S;

void printDetails(S *s){
    cout << s->rollno << ": " << s->name << " scores " << s->grade << " grade" << endl;
}

void updateData(S *s, int roll, string name, char grd){
    s->rollno = roll;
    s->name = name;
    s->grade = grd;
}

int main(){
  S stu1= {1, "Aakash", 'B'};
  printDetails(&stu1);
  updateData(&stu1, 2, "bhavesh", 'A');
  printDetails(&stu1);
  return 0;
}