#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
float median;
vector<int> v1={10,20,30,40,50},v2={5,15,25,35,45},v3;
cout<<v1.size()<<endl;
int n=v2.size();
int i=0;
while(i<n){
v1.push_back(v2.back());
v2.pop_back();
i++;
}
//if(n%2==0){
//median=(v1[n/2]+v1[n/2+1])/2;
//}else{
//median=v1[(n-1/2)+1];
//}
//cout<<median<<endl;
cout<<v1.size()<<endl;
int m=v1.size();
sort(v1.begin(),v1.end());
for(auto x:v1){
cout<<x<<" ";}
if(m%2==0){
median=(v1[n/2-1]+v1[(n/2)])/2;
}else{
median=v1[(n-1/2)];
}
cout<<endl;
cout<<median<<endl;

return 0;}
