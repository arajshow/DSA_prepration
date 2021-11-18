/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are given a number x. 
4. You are required to find the last index at which x occurs in array a.
5. If x exists in array, print the last index where it is found otherwise print -1.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
Input Format
A number n
n1
n2
.. n number of elements
A number x
Output Format
A number representing last index of occurence of x in array a or -1 if not found at all.
*/


#include<bits/stdc++.h>
using namespace std;

int index(int *arr, int x, int n){
    if(arr[--n]==x) return n;
    else if(n==0) return -1;
    else{
        int indx = index(arr, x, n);
        return indx;
    }

}

int main(){

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x; cin>>x;
    cout<<index(arr, x, n);

    return 0;

}