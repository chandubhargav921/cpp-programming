#include <iostream>

using namespace std;

struct point{
    int x;
    int y;
    point(int x, int y){
        this-> x= x;
        this-> y= y;
    }
    
};

int main()
{
    point p(10,15);
    cout<<p.x<<endl;
    cout<<p.y<<endl;
    p.x=20;
    cout<<p.x<<endl;
    return 0;
}
