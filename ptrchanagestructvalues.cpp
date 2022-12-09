#include <iostream>
using namespace std;
struct student{
        int rollno;
        string name;
        string collname;
        int marks;
    };
int main(){
    
    student chandu;
    chandu.rollno=1200014;
    chandu.name="chandu";
    chandu.collname="iiitdm kurnool";
    chandu.marks=8;
   student *ptr=&chandu;
   ptr->rollno=1200017;
   ptr->name="lavanya";
   cout<<chandu.rollno<<endl;
   cout<<chandu.name<<endl;
}