/*
1. You are given a positive number n. 
2. You are required to print the counting from 1 to n.
3. You are required to not use any loops. Complete the body of print Increasing function to achieve it.
Don't change the signature of the function.

Input Format
A number n

Output Format
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

int main(){

    int n;
    cin>>n;

    printIncreasing(n , 1);

    return 0;

}