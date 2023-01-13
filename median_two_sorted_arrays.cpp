#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int median;
list<int> v1={10,20,30,40,50},v2={5,15,25,35,45},v3;
v1.merge(v2);
cout<<v1.size()<<endl;
int n=v1.size();
if(n%2==0){
median=(v1[n/2]+v1[n/2+1])/2;
}else{
median=v1[(n-1/2)+1];
}
cout<<median<<endl;
return 0;}
