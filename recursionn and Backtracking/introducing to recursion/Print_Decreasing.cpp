/*
1. You are given a positive number n. 
2. You are required to print the counting from n to 1.
3. You are required to not use any loops. Complete the body of print Decreasing function to achieve it.

Input Format
A number n : 5

Output Format
n  : 5
n - 1  :  4
n - 2  :  3
..    :   2 
1     :   1
*/

#include<bits/stdc++.h>
using namespace std;

void printDecring(int n){
    if(n==0) return;
    cout<<n<<endl;
    printDecring(n-1);
}

int main(){

    int n;
    cin>>n;

    printDecring(n);

    return 0;
}