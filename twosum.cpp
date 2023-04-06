#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr1[]={1,2,3,9};
int arr2[]={1,2,4,4,5};
int sum=8;
int i=0;
int j=sizeof(arr2)/sizeof(1)-1;
cout<<j<<endl;
while(arr2[i]+arr2[j]!=sum){
if(arr2[i]+arr2[j]>sum){
j--;
// cout<<j<<endl;
}else if(arr2[i]+arr2[j]<sum){
i++;
// cout<<i<<endl;
}else{
cout<<"no elements found"<<endl;
}
}

cout<<"the elements are: ";
cout<<i<<" "<<j<<endl;
cout<<arr2[i]<<" "<<arr2[j];
return 0;

}