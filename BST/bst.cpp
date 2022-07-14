#include<bits/stdc++.h>
using namespace std;
#include "Btree.h"

tree<int>* target(tree<int> *root, int x){
    tree<int> *temp = root;
    if(!root)
        return 0;
    while(temp->data!=x){
        if(!temp)
            return 0;
        if(temp->data<x)
            temp = temp->right;
        else if(temp->data>x)
            temp = temp->left;
        else return temp;
    }
    return temp;
}

tree<int> *input(){
    int val;
    cout<<"enter data"<<endl;
    cin>>val;
    tree<int> *root = new tree<int>(val);
    queue <tree<int>* > q;
    q.push(root);
    while(q.size()!=0){
        tree<int> *front = q.front();
        q.pop();
        cout<<"enter left child of "<<front->data<<endl;
        int l;
        cin>>l;
        if(l!=-1){
            tree<int> *left = new tree<int>(l);
            front->left = left;
            q.push(left);
        }
        cout<<"enter right child of "<<front->data<<endl;
        int r;
        cin>>r;
        if(r!=-1){
            tree<int> *right = new tree<int>(r);
            front->right = right;
            q.push(right);
        }

    }
    return root;

}

//4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1

void printTree( tree<int> *root){
    if(root!=NULL)
    cout<<root->data<<" : ";
    if(root->left!=NULL)
        cout<<"L"<<root->left->data;
    if(root->right!=NULL)
        cout<<"L"<<root->right->data;
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

int main(){
    tree<int> *root = input();
    int x= 4;

    tree<int> *temp = target(root, x);
    if(temp->data==x) cout<<"yes we get it ";
    else cout<<"loosed it";

    

    

    return 0;

}