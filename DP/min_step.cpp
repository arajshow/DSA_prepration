#include<iostream>
using namespace std;
// int red(int n ){
//     int ans=1;
//     int x=INT_MAX, y=INT_MAX, z=INT_MAX;
//     if (n==1)
//     {
//         /* code */
//         return 0;
//     }
    
//     x = red(n-1);
//     if(n%3==0){
//         y = red(n/3);
//     }
//     if(n%2==0){
//         z = red(n/2);
//     }
//     ans = min(x, min(y, z));
//     return ans+1;
// }

int red_2(int n, int *arr){
    if(n==1) return 0;

    arr[n-1] = red_2(n-1, arr);
    if(n%2==0) arr[n/2] = red_2(n/2, arr);
    if(n%3==0) arr[n/3] = red_2(n/3, arr);
    return 1 + min(arr[n-1], min(arr[n/2], arr[n/3]));
}

int red_helper(int n){
    int *ans = new int[n+1];
    for(int i=0; i<n+1; i++) ans[i]=-1;

    return red_2(n, ans);
}

int main(){
    int n;
    cin>>n;
    // either decress n by 1;
    // if n%2==0 divide n by 2
    // if n%3==0 divide n by 3
    // you have above three steps to reduce n to 1  find minimum steps.

    cout<<red_helper(n);

    

    return 0;

}