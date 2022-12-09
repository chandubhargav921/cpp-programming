#include <iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    cout<<"before reversing"<<endl;
    getline(cin,str1);
    cout<<"after reversing"<<endl;
        for(int j=str1.length();j>=0;j--){
            str2 +=str1[j];
        }
    
    cout<<str2<<endl;
}