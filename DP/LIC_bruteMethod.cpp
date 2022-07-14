/*
Given an array with N elements, you need to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in strictly increasing order.
Input Format
Line 1 : An integer N 
Line 2 : Elements of arrays separated by spaces

Output Format
Line 1 : Length of longest subsequence

Input Constraints
1 <= n <= 10^3

Sample Input :
6
5 4 11 1 16 8

Sample Output 1 :
3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int *arr = new int[n];
    // int *arr = new int[n];
    vector<int> ans(n, 1);
    int mx=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[i]>arr[j]){
                if(ans[i]<=ans[j]){
                    ans[i]= ans[j]+1;
                    mx= max(mx, ans[i]);
                }
            }

        }
    }

    cout<<mx<<endl;
// 8
// 5 4 11 2 3 7 16 8


    return 0;

}