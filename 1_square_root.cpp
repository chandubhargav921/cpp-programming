#include <iostream>

using namespace std;
int istrue(int x){
    for(int i=1;i<x;i++){
        int temp=x/i;
        if(i==temp){
            return i;
        }else{
            // while(istrue(x)!=1){
            //     x++;
                
            // }
            // return istrue(x)-1;
        }
    }
return -1;
}
// bool isps(int x){
//  if(istrue(x)==1){
     
//  }
// }
int main()
{int x;
cout<<"enter the number"<<endl;
cin>>x;
    cout<<istrue(x)<<endl;
}
