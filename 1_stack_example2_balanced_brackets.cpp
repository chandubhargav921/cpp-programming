#include <iostream>
#include <stack>

using namespace std;
bool isSame(char c1,char tp){
    if((c1=='['&&tp==']')||(c1=='{'&&tp=='}')||(c1=='('&&tp==')')){
        return true;
    }else{
        return false;
    }
};
int main()
{ string str;
cin>>str;
    stack<char> s;
    for(int i=0;i<str.length();i++){
       if((str[i]=='(')||(str[i]=='{')||(str[i]=='[')){
           
        s.push(str[i]);
        
           
       }else{
           if(s.empty()==true)
       {
           return false;
       }else if(isSame(s.top(),str[i])==false){
           return false;
       }else{
           s.pop();
       }
    }
    }
    
    // if(s.empty()==true){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }
    return (s.empty()==true);
}
