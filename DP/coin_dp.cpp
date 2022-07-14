/*
For the given infinite supply of coins of each of denominations, D = {D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total number of ways W, in which you can make the change for Value V using coins of denominations D.
Return 0 if the change isn't possible.
Input Format
The first line of the input contains an integer value N, which denotes the total number of denominations.

The second line of input contains N values, separated by a single space. These values denote the value of denomination.

The third line of the input contains an integer value, that denotes the value of V.

Output Format
Print the total total number of ways i.e. W.

Constraints :
1 <= n <= 10
1 <= V <= 1000

Time Limit: 1sec

Sample Input 1 :
3
1 2 3
4

Sample Output 1 :
4

Explanation to Sample Input 1 :
Number of ways are - 4 total i.e. (1,1,1,1), (1,1, 2), (1, 3) and (2, 2).

Sample Input 2 :
6
1 2 3 4 5 6
250

Sample Output 2 :
13868903
*/
#include<bits/stdc++.h>
using namespace std;

// int coin(int *arr, int n, int b){
//     // vector
//     if(b==0) return 1;
//     else if(b<0) return 0;
//     // int sm=1;
//     // for(int i=0; i<n; i++){
        
//     //     int r = b-arr[i];
//     //     if(r<=0) break;
//     //     ans[i]= coin(arr, n, ans, r) + ;
//     //     sm+=ans[i];
//     // }

//     if(n==0) return 0;
//     if(arr[0]>b) return 0;

//     int r = b-arr[0];
//     int sm = coin(arr, n, r) + coin(arr+1, n-1, b) ;
//     return sm;
    


// }

int main(){

    int n;
    cin>>n;

    int *arr = new int[n];
    // int *ans = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        // ans[i]=0;
    }
    int b;
    cin>>b;

    // cout<<coin(arr, n, b);
    vector<int> ans(b+1, 0);

    int temp = n, i=0;
    while(i<n){
        ans[0]=1;
        for(int j=arr[i]; j<b+1; j++){
            if(j==0){ ans[j]=1; continue;}
            ans[j]+=ans[j-arr[i]];
        }
        i++;

    }
    cout<<ans[b]<<endl;
    

    return 0;

}