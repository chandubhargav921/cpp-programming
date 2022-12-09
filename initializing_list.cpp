#include <iostream>

using namespace std;

struct point{
    int x;
    int y;
    point(int xc, int yc):x(xc),y(yc){
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
