/*
Given two integers a and b. You need to find and return the count of possible ways in which we can represent the number a as the sum of unique integers raise to the power b.
For eg. if a = 10 and b = 2, only way to represent 10 as -
10 = 1^2 + 3^2

Hence, answer is 1.
Note : x^y represents x raise to the power y
Inout Format :
Two integers a and b (separated by space)

Output Format :
Count

Constraints :
1 <= a <= 10^5
1 <= b <= 50

Sample Input 1 :
10 2

Sample Output 1 :
1

Sample Input 2 :
100 2

explanation: 
100-> 10^2
100-> 8^2 + 6^2
100-> 7^2+ 5^2 + 4^2 + 3^2 +1^2
*/

#include<bits/stdc++.h>
using namespace std;

int pos(int a, int b, vector<int> &arr){
    int n = sqrt(a);
    // int r = a- pnhi bnaaaaaaaaaaaa oyeee

    // 
}

int main(){

    int a, b;
    cin>>a>>b;

    int limit = sqrt(a);
    vector<int> arr(limit + 1, 0);

    // for(int i=0; i<limit+1; i++){

    // }

    pos(a, b, arr);

    return 0;

}