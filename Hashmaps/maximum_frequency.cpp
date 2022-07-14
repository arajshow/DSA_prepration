/*
Coding Problem
Problem Statement: Maximum Frequency Number
Problem Level: EASY
Problem Description:
You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format :
The first and only line of output contains most frequent element in the given array.

Constraints:
0 <= N <= 10^8
Time Limit: 1 sec

Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, mfreq=0, mans=0;
    cin>>n;
    vector<int> v(n,0);
    unordered_map<int, int> ourmap;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(ourmap[v[i]]>0){
            int k = ourmap[v[i]];
            ourmap[v[i]]= k+1;
        }else ourmap[v[i]] = 1;
        mfreq = max(mfreq, ourmap[v[i]]);
        if(mfreq==ourmap[v[i]]) mans=v[i];
    }

    cout<<mans<<" :  "<<mfreq;

    return 0;

}