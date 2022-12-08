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
    
    student chanduu={1200015,"chanduu","iiitdmmkurnool",9};
    
    cout<<chandu.rollno<<" "<<chandu.name<<" "<<chandu.collname<<" "<<chandu.marks<<endl;
    cout<<chanduu.rollno<<" "<<chanduu.name<<" "<<chanduu.collname<<" "<<chanduu.marks<<endl;
}