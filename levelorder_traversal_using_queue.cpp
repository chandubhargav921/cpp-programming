#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
int height(node *head){
    if(head==NULL){
        return 0;
    }else{
        return max(height(head->left),height(head->right))+1;
    }
}
int countt=0;
int forsize(node *head){
    if(head==NULL){
        return 0;
    }else{
        countt++;
        forsize(head->left);
        forsize(head->right);
    }
    return countt;
}
// vector<int> kdistanceno(node *head,int k){
//  vector<int> v[count];
//     if(head!=NULL){
//         while(k<count){
//         if(k==0){
//             v[]++;
//         }
            
//         }
//     }
    
// }
void printkdis(node *head,int k){
    vector<int> v5;
    if(head==NULL){
        return ;
    }
    vector<int> ans;
    if(k==0){
        cout<<head->data<<" ";
    }else{
        printkdis(head->left,k-1);
        printkdis(head->right,k-1);
    }
    
    // return ans;
}
void levelorder(node *head){
     if(head==NULL){
            return ;
        }
    queue<node *>q;
    q.push(head);
    while(q.empty()==false){
       
        node *temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
// vector<int> printkdis(node *head,int k){
//     vector<int> v5;
//     if(head==NULL){
//         return v5;
//     }
//     vector<int> ans;
//     if(k==0){
//         ans.push_back(head->data);
//     }else{
//         printkdis(head->left,k-1);
//         printkdis(head->right,k-1);
//     }
    
//     return ans;
// }

int main(){
    node *head=new node(20);
    head->left=new node(30);
    head->right=new node(40);
    head->left->left=new node(50);
    head->right->right=new node(10);
    head->left->right=new node(90);
    head->right->left=new node(100);
    head->right->left->right=new node(120);
    // cout<<forsize(head);
    cout<<"hi"<<endl;
    cout<<endl;
    cout<<"i am runnning"<<endl;
    int he=height(head);
    cout<<he<<endl;
    int i=0;
    vector<vector<int>> v1;
    while(i<he){
    // v1.push_back(printkdis(head,i));
    printkdis(head,i);
    i++;
    }
    // for(auto x:v1){
    //     cout<<x.size()<<endl;
    // }
     cout<<endl;
     levelorder(head);
    cout<<"what about me?"<<endl;
    return 0;
}