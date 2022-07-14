#include<bits/stdc++.h>
using namespace std;
#include "tree.h"

 tree<int>* printthis(vector<int> &i, vector<int> &p){
    tree<int> *root= new tree<int>(p[0]);
    int n= i.size(), pLocation;
    vector<int> *newi;
    vector<int> *newp;
    for(int j=0; j<n; j++){
        if(i[j]!=p[0])
        newi->push_back(i[j]);
        else{pLocation=j; break;}
    }
    n= newi->size();
    for(int j=1; j<=n; j++){
        newp->push_back(p[j]);
    } 
    tree<int> *left= printthis(newi,newp);
    root->left = left;
    n= i->size();
    vector<int> *ni;
    vector<int> *np;   
    for(int j=newi->size(); j<n; j++ ){
        np->push_back(p[j]);
    }
    for(int j=pLocation+1; j<n; j++)
        ni->push_back(i[j]);

    tree<int> *right= printthis(ni,np);
    root->right = right;

    return root;

}

// inorder -> 4 2 8 5 9 1 6 3 10 7 11
// preorder -> 1 2 4 5 8 9 3 6 7 10 11

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
    int n=11;

    vector<int> a(n);
    vector<int> v(n);

    cout<<"give inorder"<<endl;


    for(int i=0; i<n; i++)
        cin>>v[i];

    cout<<"give preorder"<<endl;

    for(int i=0; i<n; i++)
        cin>>a[i];

    tree<int> *root = printthis(v,a);

    printTree(root);




    

    return 0;

}