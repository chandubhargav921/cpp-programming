#include <iostream>
#include <vector>

using namespace std;

int main()
{vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<endl;
}
cout<<v.front()<<endl;
cout<<v.back()<<endl;
v.front()=100;
cout<<v.front()<<endl;
v.insert(v.end(),200);
cout<<v.back()<<endl;
v.erase(v.begin());
cout<<v.front()<<endl;
v.clear();
if(v.empty()==true){
    cout<<"the vector is empty"<<endl;
}else{
    cout<<"the vector is not empty"<<endl;
}
cout<<v.size()<<endl;
v.resize(10);
cout<<v.size();
v.resize(20,143);//the size and the default value
for(auto x:v){
    cout<<x<<endl;
}

    return 0;
}
