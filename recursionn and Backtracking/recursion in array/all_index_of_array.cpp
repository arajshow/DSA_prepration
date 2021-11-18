/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the all indices at which x occurs in array a.
5. Return an array of appropriate size which contains all indices at which x occurs in array a.

Note -> The online judge can't force you to write the function recursively but
that is what the spirit of question is. Write recursive and not iterative logic.
The purpose of the question is to aid learning recursion and not test you.
Input Format
A number n
n1
n2
.. n number of elements
A number x
Output Format
Return the array of indices from the allIndices function. Display is managed for you.
*/

#include<bits/stdc++.h>
using namespace std;

void index(int *arr, int x, int n, int start){
    if(arr[start]==x) cout<<start<<endl;

        start++;
        if(start<n){
            index(arr, x, n, start);
        }
        return;
}

int main(){

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x; cin>>x;
    index(arr, x, n, 0);

    return 0;

}