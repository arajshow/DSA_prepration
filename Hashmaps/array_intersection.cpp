/*
Problem Description:
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection;
An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, 
when there is a common value that exists in both the arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.

The intersection elements printed would be in the order they appear in the first sorted array/list(ARR1).

<br>
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains an integer 'N' representing the size of the first array/list.

The second line contains 'N' single space separated integers representing the elements of the first the array/list.

The third line contains an integer 'M' representing the size of the second array/list.

The fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output format :
For each test case, print the intersection elements in a row, separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^6
0 <= M <= 10^6

Time Limit: 1 sec

Sample Input 1 :
1
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10

Sample Output 1 :
2 3 4
10
*/
#include<bits/stdc++.h>
using namespace std;

void runit(){
    int n,m;
    cin>>n;

    vector<int> arr1(n,0);
    vector<int> ans;
    unordered_map<int, bool> map;
    for(int i : arr1){
        cin>>i;
        map[i]= true;
    }
    vector<int> arr2(m,0);
    for(int i : arr2){
        cin>>i;
        if(map[i]>0) ans.push_back(i);
    }

    for(int a : ans) cout<<a<<" ";
    cout<<endl;


}

int main(){
    int t;
    cin>>t;

    while(t--){
        runit();
    }

    

    return 0;

}