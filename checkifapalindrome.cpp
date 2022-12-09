#include <iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    cout<<"before reversing"<<endl;
    getline(cin,str1);
    cout<<"after reversing"<<endl;
        for(int j=str1.length();j>0;j--){
            str2 +=str1[j-1];
        }
    
    cout<<str2<<endl;
    cout<<str1<<endl;
    cout<<str2.length()<<endl;
    cout<<str1.length()<<endl;
    if(str1 != str2){
        cout<<"the entered string is not a palindrome"<<endl;
    }else{
        cout<<"the entered string is a palindrome"<<endl;
    }
    
}