/*
Problem Description:
A thief robbing a store can carry a maximal weight of W into his knapsack. 
There are N items, and i-th item weigh 'Wi' and the value being 'Vi.' 
What would be the maximum value V, that the thief can steal?
Input Format :
The first line of the input contains an integer value N, which denotes the total number of 
items.

The second line of input contains the N number of weights separated by a single space.

The third line of input contains the N number of values separated by a single space.

The fourth line of the input contains an integer value W, which denotes the maximum weight the 
thief can steal.

Output Format :
Print the maximum value of V that the thief can steal.

Constraints :
1 <= N <= 20
1<= Wi <= 100
1 <= Vi <= 100

Time Limit: 1 sec

Sample Input 1 :
4
1 2 4 5
5 4 8 6
5

Sample Output 1 :
13

Sample Input 2 :
5
12 7 11 8 9
24 13 23 15 16
26

Sample Output 2 :
51
*/

#include<bits/stdc++.h>
#define ll long long int
#define vl vector <ll>
#define fr(a,b,c) for(int a=b; a<c; a++)
#define all(c) (c).begin(),(c).end()
using namespace std;

int solvit(int n, int w, vector<int> wi, vector<int> vi){
    if(w==0 || n==0){
        return 0;
    }

    int sm=0, ans=0;
    for(int i= n-1; i>=0; i--){
        if(wi[i]<=w){
            sm+=vi[i];
            sm+= solvit(i, w-wi[i], wi, vi);
        }
        if(ans<sm){
            ans=sm;
        }
        sm=0;
    }
    return ans;
    
}

int main(){

    int n, w;
    cin>>n;
    vector<int> weight(n,0);
    vector<int> value(n,0);

    fr(i, 0,  n){
        cin>>weight[i];
    }

    fr(i, 0,  n){
        cin>>value[i];
    }

    cin>>w;

    cout<<solvit(n, w, weight, value);


    return 0;

}