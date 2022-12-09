#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
 vector <int> v={10,20,30,40,50};
 
 vector<int>::iterator i;
 i=v.begin();
 cout<<(*i)<<endl;
 i++;
 cout<<(*i)<<endl;
 i=v.end();
 i--;
 cout<<(*i)<<endl;
 i--;
 cout<<(*i)<<endl;
 
 return 0;
 
}
