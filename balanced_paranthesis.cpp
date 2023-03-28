#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cout<<"enter the string to check"<<endl;
    cin>>input;
    stack<char> st;
    map<char,char> m;
    m.insert({')','('});
    m.insert({'}','{'});
    m.insert({'>','<'});
    m.insert({']','['});
    int i=0;
    // while(i<input.size()){
    //     cout<<"hello world"<<endl;
    //     if(input[i]=='('||input[i]=='['||input[i]=='{'||input[i]=='<'){
    //     st.push(input[i]);
    //     }
        
    //     else{
    //         auto itr=m.find(input[i]);
    //         // if(itr!=m.end()){
    //         if(st.top()==itr->first){
    //             cout<<itr->first;
    //             st.pop();
    //         }
            
    //     // }
    //     }
    //     i++;
    
    // }
    // stack<int> at1;
    // at1.push(1);
    // // cout<<at1.size()<<endl;
    // cout<<st.size()<<endl;
    // if(st.size()==0){
    //     cout<<st.top();
    //     cout<<" not accepted"<<endl;

    // }else{
    //       cout<<st.top();
    //     cout<<"accepted"<<endl;
    // }
    for(int i=0;i<input.size();i++){
        if(input[i]=='('||input[i]=='['||input[i]=='{'||input[i]=='<'){
        st.push(input[i]);
        }else{
            auto itr=m.find(input[i]);
            // cout<<itr->first;
            if(st.top()==itr->second){
                st.pop();
            }else{
                // cout<<itr->first<<endl;
                cout<<"not accepted"<<endl;
            }
        }
    }
    // cout<<st.size()<<endl;
    if(st.size()==0){
        cout<<"accepted"<<endl;
    }else{
        cout<<"not accepted"<<endl;
    }
    return 0;
}
