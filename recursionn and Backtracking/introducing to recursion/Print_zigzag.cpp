/*
1. Here are a few sets of inputs and outputs for your reference
Input1 -> 1
Output1 -> 1 1 1

Input2 -> 2
Output2 -> 2 1 1 1 2 1 1 1 2

Input2 -> 3
Output3 -> 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

: 4
 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4

2. Figure out the pattern and complete the recursive function pzz to achieve the above for any positive number n.

Note -> The online judge can't force you to write the function recursively but
that is what the spirit of question is.Write recursive and not iterative logic.
The purpose of the question is to aid learning recursion and not test you.
Input Format
A number n
Output Format
As discussed in point 1 of description
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    cout<<n<<" ";

    if(n!=1)
    pattern(n-1);

    cout<<n<<" ";

    if(n!=1)
    pattern(n-1);
    
    cout<<n<<" ";
}

int main(){

    int n;
    cin>>n;

    pattern(n);

    return 0;

}