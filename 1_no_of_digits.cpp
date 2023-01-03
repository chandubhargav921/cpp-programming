#include <iostream>
using namespace std;
int num_digit(int number){
    int count=0;
    while(number>10){
        number=number/10;
        count++;
        
    }
return count+1;
}
int main()
{int number;
cout<<"enter the number"<<endl;
cin>>number;
    cout<<num_digit(number)<<endl;
}
