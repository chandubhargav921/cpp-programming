/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // float ans;
    int rdno;
    int a,b;
    string ans="";
    srand(time(0));
    int rdto;
    // srand(time(0));
    rdto=rand()%(2-1)+1;
    if(rdto==2){
        a=100,b=200;
    }else{
        a=100,b=13000;
    }
     rdno = rand() % (b-a) + a;
    ans=to_string(rdno);
    int n=ans.size();
    string ma="";
    int res=2;
    int i=1;
    while(res--){
        ma+=ans[n-i];
        i++;
    }
    string com="";
    for(int i=0;i<n-2-1;i++){
        com+=ans[i];
    }
    string mm="";
    mm+=com+"."+ma;
    
    
    
    // cout<<"Hello World";
    cout<<mm<<endl;
   

    return 0;
}
