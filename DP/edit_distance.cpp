#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int n= word1.size(), m = word2.size();
        
        // base case;
        if(n==0 && m==0) return 0;
        
        //edge case;
        if(n==0 ||m==0){
            return max(n, m);
        }
        
        int x= INT_MAX, y=INT_MAX, z= INT_MAX;        
        if(n==m){
            if(word1[0]!=word2[0]){
                x = 1 + minDistance(word1.substr(1), word2); //delete
                y = 1 + minDistance(word1, word2.substr(1)); //delete2;
                z = 1 + minDistance(word1.substr(1), word2.substr(1)); //replaced  
                return min(z, min(x, y));
            }else return minDistance(word1.substr(1), word2.substr(1));
        }
        
        

        
        if(word1[0]!=word2[0]){
            x = 1 + minDistance(word1.substr(1), word2); //delete
            y = 1 + minDistance(word1.substr(1), word2.substr(1)); //replace;
            z = 1 + minDistance(word1, word2.substr(1)); //added
            
            
            return min(x, min(y, z));
        }else{
            return minDistance(word1.substr(1), word2.substr(1));
        }
        
        return 0;
    }
        
    
};

int main(){

    string s1, s2;
    cin>>s1>>s2;

    Solution s;
    cout<<s.minDistance(s1,s2);

    

    return 0;

}