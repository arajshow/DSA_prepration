#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9]= {1,2,3,2,1,9,4,5,9};
    vector<int> ans;

    unordered_map<int, bool> v;
    for(int i=0; i<9; i++){
        if(v.count(arr[i])>0) continue;
        v[arr[i]] = true;
        ans.push_back(arr[i]);

    }

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<endl;


    return 0;

}