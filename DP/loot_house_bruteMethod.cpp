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

int mxLoot(int *arr, int n){
    int ans1=0;
    int ans2=0;
    if(n==0) return 0;
    else if(n==1) return arr[0];
    else if(n<3) return max(arr[0], arr[1]);
    else if(n<4) return max(arr[1], arr[0]+arr[2]);

    ans1+=arr[0];
    ans2+=arr[1];
    ans1+= mxLoot(arr+2, n-2);
    ans2+= mxLoot(arr+3, n-3);

    return max(ans1, ans2);
}

int main(){

    int n;
    cin>>n;

    // vector<int> a(n, 0);
    int *a = new int[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<mxLoot(a, n)<<endl;

    return 0;

}