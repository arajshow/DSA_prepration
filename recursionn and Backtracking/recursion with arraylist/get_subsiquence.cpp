/*
1. You are given a string str.
2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
Use sample input and output to take idea about subsequences.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
Input Format
A string str : abc
Output Format
Contents of the arraylist containing subsequences as shown in sample output
// [, c, b, bc, a, ac, ab, abc]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    if(s.size()==0){
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    else{
        vector<string> ans = gss(s.substr(1));
        vector<string> finalans = ans;
        for(int i=0; i<ans.size(); i++){
            finalans.push_back(s[0] + ans[i]);
        }
        return finalans;
    }
    
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';

    return 0;
}