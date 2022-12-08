#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 template <typename t>
 t myMax(t x,t y){
     return (x>y)?x:y;
 }
int main()
{
 
 cout<<myMax<int>(7,10)<<endl;
 cout<<myMax<char>('w','v')<<endl;
}
