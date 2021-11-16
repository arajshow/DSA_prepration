/*
1. You are given a positive number n. 
2. You are required to print the counting from n to 1 and back to n again.
3. You are required to not use any loops. Complete the body of pdi function to achieve it.
Don't change the signature of the function.

Input Format
A number n

Output Format
n
n - 1
n - 2
..
1
1
2
3
..
n
*/

#include<bits/stdc++.h>
using namespace std;

void printIncreasing(int n , int start){
    if(start<=n){
    cout<<start++<<endl;
    printIncreasing(n , start);
    }else return;
}

void printDecring(int n){
    if(n==0) return;
    cout<<n<<endl;
    printDecring(n-1);
}

int main(){

    int n;
    cin>>n;
    printIncreasing(n , 1);
    printDecring(n);
    return 0;
}