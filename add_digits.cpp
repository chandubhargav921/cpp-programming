/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// class Solution {
// public:
    int addDigits(int num) {
        while(!(num<10&&num>=0)){
            string numm=to_string(num);
            int ans=0;
            for(int i=0;i<numm.length();i++){
                string temp="";
                temp+=numm[i];
                ans+=stoi(temp);
            }
            num=ans;
        }
        return num;
    };
// };

int main()
{
    string test="12";
    int res=stoi(test);
    int ans=1;
    ans=ans+res;
    cout<<ans<<endl;
    cout<<"Hello World";
    
 cout<<addDigits(24)<<endl;
    return 0;
}
