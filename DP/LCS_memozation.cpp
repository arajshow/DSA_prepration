#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int LCS_helper(string s1, string s2, vector<vector<int>> &arr, int m, int n ){
        
        
//         base case:
        if(s1.length()==0 || s2.length()==0){
            return 0;
        }
        
        if(arr[m-s1.length()][n-s2.length()]!=-1){
            return arr[m-s1.length()][n-s2.length()];
        }
        
        if(s1[0]==s2[0]){
            return 1 + LCS_helper(s1.substr(1), s2.substr(1), arr, m, n);
        }

        int x = LCS_helper(s1.substr(0), s2.substr(1), arr, m, n);
        int y = LCS_helper(s1.substr(1), s2.substr(0), arr, m, n);
        int z = LCS_helper(s1.substr(1), s2.substr(1), arr, m, n);

        int ans = max(x, max(y, z));
        arr[m-s1.length()][n-s2.length()]=ans;
        return ans;
        
    }
    
    int longestCommonSubsequence(string s1, string s2) {
        vector<int> v(s2.length(), -1);
        vector<vector<int>> output(s1.length(), v);
        int m = output.size(), n = output[0].size();
        
        return LCS_helper(s1, s2, output, m, n);
//     if(s1.length()==0 || s2.length()==0){
//         return 0;
//     }

//     // main recursion process;
//     if(s1[0]==s2[0]){
//         return 1 + longestCommonSubsequence(s1.substr(1), s2.substr(1));
//     }

//     int x = longestCommonSubsequence(s1.substr(0), s2.substr(1));
//     int y = longestCommonSubsequence(s1.substr(1), s2.substr(0));
//     int z = longestCommonSubsequence(s1.substr(1), s2.substr(1));

//     return max(x, max(y, z));        
    }
};


int main(){

    string s1, s2;
    cin>>s1>>s2;

    Solution s;
    cout<<s.longestCommonSubsequence(s1, s2);   

    return 0;

}

// "hofubmnylkra"
// "pqhgxgdofcvmr"