/*
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to print the elements of array from beginning to end each in a separate line.
4. For the above purpose complete the body of displayArr function. Don't change the signature.

Note -> The online judge can't force you to write the function recursively but that is what
the spirit of question is. Write recursive and not iterative logic. The purpose of
the question is to aid learning recursion and not test you.

Input Format
A number n
n1
n2
.... n number of elements

Output Format
n1
n2
<<<<<<< HEAD:recursionn and Backtracking/recursion in array/Display_array.cpp
.. n elements
*/

#include<bits/stdc++.h>
using namespace std;

void printout(int *arr, int start, int n){
    if(start==n) return;
    else{
        cout<<arr[start++]<<endl;
        printout(arr, start , n);
    }
}

int main(){

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printout( arr, 0, n);

    return 0;

}
=======
.... n elements
*/
>>>>>>> 7597c5122a11b3624bb01df2ac58d02620af4424:recursionn and Backtracking/recursion in array/Display array.cpp
