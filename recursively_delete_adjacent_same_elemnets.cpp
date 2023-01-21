/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
string rremove(string s){
    //     string ans="";
    //     if(s.size()==0){
    //         return ans;
    //     }
        
    //   stack<char>s1,s2;
    //   s1.push(s[0]);
      
    //   for(int i=1;i<s.length();i++){
    //       if(s[i]!=s1.top()){
    //       s1.push(s[i]);
    //       }else{
    //           s1.pop();
    //       }
    //   }
    string s1=s;
       
        // code here
        // stack<char> s1,s2;
        // for(int j=0;j<s.length();j++){
        //             if(s[j]==s[i]){
        //                 temp[j]++;
        //             }
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                int temp=0;
                for(int j=i;j<s.length();j++){
                    if(s[j]==s[i]){
                        temp++;
                    }else{
                        break;
                    }
                    // s.erase(i,temp);
                }
            s.erase(i,temp);
            // i+=temp;
            if(s.length()==0){
                return "";
            }
            // cout<<s<<" "<<i<<endl;
            i=i-1;
            }
        }
        int res=0;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                res=1;
                break;
            }
        }
        if(res!=1){
        return s;
        }else{
            return rremove(s);
        }
        // stack<char> st;
        // string s1="";
        // if(s.size()==0){
        //         return s1;
        //     }
        // st.push(s[0]);
        // for(int i=1;i<s.length();i++){
        //     // if(s.size()==0){
        //     //     break;
        //     // }
        //     // st.push(s[0]);
        //     if(st.top()!=s[i]){
        //     st.push(s[i]);
        //     }else{
        //         st.pop();
        //     }
        // }
        // // string s1="";
        // for(int i=0;i<st.size();i++){
        //     s1+=st.top();
        //     st.pop();
        // }
        // reverse(&s1[0],&s1[st.size()]);
        
        // return s;
    }

int main()
{
string st="abccbccba";
 cout<<rremove(st);

    return 0;
}
