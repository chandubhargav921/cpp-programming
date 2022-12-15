#include <iostream>
#include <stack>

using namespace std;
 stack<int> s;
//  int getMin(stack<int> s){
//      int  min=0;
//      while(s.empty()==false){
//      auto itr=&s.top();
//      itr++;
//      if(s.top()<*(itr)){
//          min=*(itr);
//      }
//      }
//      return min;
//  }
int getMin(stack<int> s){
    int min=s.top();
    while(s.empty()==false){
         
        if(s.top()<=min){
            min=s.top();
            
        }else{
            
        }
        s.pop();
    }
     return min;
   }
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(2);
    s.push(30);
    s.push(5);
    cout<<getMin(s);
    cout<<endl;
    cout<<s.top();
    
   
    
    
}
