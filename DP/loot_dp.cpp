/*
A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
Input format :
The first line of input contains an integer value of 'n'. It is the total number of houses.

The second line of input contains 'n' integer values separated by a single space denoting the amount of money each house has.

Output format :
Print the the maximum money that can be looted.

Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec

Sample Input 1 :
6
5 5 10 100 10 5

Sample Output 1 :
110

Sample Input 2 :
6
10 2 30 20 3 50

Sample Output 2 :
90
*/

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int> ans(n+1, 0);
    int *a = new int[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(n==0) ans[0]=0;
    else if(n==1) ans[1]= a[0];
    else if(n==2) ans[n] = max(a[0], a[1]);
    else{
        ans[0]=0;
        ans[1]= a[0];
        ans[2] = max(a[0], a[1]);
        int i=3;
        while(i<=n){
            int temp1, temp2;
            temp1 = (a[i-1] + ans[i-2]);
            temp2 = ans[i-1];
            ans[i] = max(temp1, temp2);
            i++;
        }
        cout<<ans[n]<<endl;
    }

    // cout<<mxLoot(a, n)<<endl;


    return 0;

}