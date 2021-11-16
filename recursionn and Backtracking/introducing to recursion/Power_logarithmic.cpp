/*
1. You are given a number x.
2. You are given another number n.
3. You are required to calculate x raised to the power n.
Don't change the signature of power function.

Note1 -> The previous version expects the call stack to be of n height.
This function expects call function to be only log(n) high.

Note2 -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic.The purpose of the question is to aid learning recursion and not test you.

Input Format
A number x : 2
A number n : 5

Output Format
x raised to the power n : 32
*/

#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n){
    if(n==0) return 1;
    int num = x;
    num*=pow(x , n-1);
    return num;

}

int main(){

    int x, n;
    cin>>x>>n; //take first input as base and next one as power
    cout<<pow(x, n);
    return 0;
}