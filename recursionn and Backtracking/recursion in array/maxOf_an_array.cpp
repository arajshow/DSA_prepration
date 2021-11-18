/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the maximum of input. 
4. For the purpose complete the body of maxOfArray function. Don't change the signature.

Note -> The online judge can't force you to write the function recursively but that is what
the spirit of question is. Write recursive and not iterative logic.
The purpose of the question is to aid learning recursion and not test you.
Input Format
A number n
n1
n2
.. n number of elements
Output Format
A number representing max
*/


#include<bits/stdc++.h>
using namespace std;

int printoutMax(int *arr, int maxi, int n){
    if(n==0){
        maxi = max(maxi , arr[n]);
        return maxi;
    }
    else{
        maxi = max(maxi , arr[n]);
        maxi = printoutMax(arr, maxi, n-1);
        return maxi;
    }

}

int main(){

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxi=0;
    maxi = printoutMax( arr, maxi, n);
    cout<<maxi;

    return 0;

}