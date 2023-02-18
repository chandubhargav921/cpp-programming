#include <iostream>

using namespace std;
struct node{
    int key;
    node *left,*right;
    node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};
int main()
{node *root =new node(20);
root->right= new node(30);
root->left =new node(10);
cout<<root->key<<" "<<root->left->key<<" "<<root->right->key<<endl;

    return 0;
}
