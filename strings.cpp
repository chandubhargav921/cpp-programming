#include <iostream>
using namespace std;
int main(){
    string str;
    string name;
    string fullname;
    str="chanduchandu";
    cout<<str<<endl;
    str=str+"bhargav";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    cout<<str.substr(3,7)<<endl;
    cout<<str.find("bh")<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    getline(cin,fullname);
    cout<<"your fullname is"<<fullname<<endl;
    
    return 0;
    
}