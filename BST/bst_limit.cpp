#include<bits/stdc++.h>
using namespace std;
#include "Btree.h"

void limit(tree<int>* root, int a, int b){
    if(root->data>a){

    }else if(root->data<b){

    }else{
        cout<<root->data<<" ";
        limit(root->left, a, root->data);
        limit(root->right, root->data, b);
    }
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
    int a=3, b=5;
    tree<int> *root = input();
    limit(root, a, b);


    return 0;

}