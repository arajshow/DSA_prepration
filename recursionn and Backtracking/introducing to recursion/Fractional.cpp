/*
1. You are given a number n.
2. You are required to calculate the factorial of the number.
Don't change the signature of factorial function.

Input Format
A number n : 5

Output Format
factorial of n : 120
*/

#include<bits/stdc++.h>
using namespace std;

int frac(int n){
    if(n==1) return 1;
    int count =n;
    count*=frac(n-1);
    return count;
}

int main(){

    int n;
    cin>>n;

    cout<<frac(n);
    return 0;
}