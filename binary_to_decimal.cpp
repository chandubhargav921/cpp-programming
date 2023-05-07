/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int bstodd(string s){
     int n=s.size();
     int sum=0;
   reverse(s.begin(),s.end());
            for(int i=0;i<n;i++){
                string temp="";
                temp+=s[i];
                sum+=pow(2,i)*(stoi(temp));
                // cout<<sum<<" ";
            }
 return sum;
}
int main()
{int rem=618%7;
// cout<<rem<<endl;
string q="0011001010";
cout<<bstodd(q);
    // cout<<"Hello World";

    return 0;
}
