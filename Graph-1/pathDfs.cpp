#include<bits/stdc++.h>
#define ll long long int
#define vl vector <ll>
#define fr(a,b,c) for(int a=b; a<c; a++)
#define all(c) (c).begin(),(c).end()
using namespace std;


vector<int>  dfs(vector<vector<int>> edge, vector<bool> &visited, int s, int f, vector<int> &v){
    int n= visited.size();
    
    visited[s]=true;
    v.push_back(s);
    if(f==s){
        return v;
    }


    fr(i, 0, n){
        if(visited[i]) continue;
        if(i==s) continue;
        if(edge[s][i]==1){
            v = dfs(edge, visited, i, f, v);
            if(i==f)
            break;
        }
    }
    return v;

}

int main(){

    int n, edgeNo;
    cin>>n>>edgeNo;

    vector<vector<int>> edge(n, vector<int>(n, 0));
    vector<bool> visited(n, false);

    fr(i, 0, edgeNo){
        int f, e;
        cin>>f>>e;
        edge[f][e]=1;
        edge[e][f]=1;
    }

    int f, s;
    cin>>f>>s;  //find is there any path between f ans s;

    vector<int> ans;

    ans = dfs(edge, visited, f, s, ans);

    fr(i, 0, ans.size()){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;

}

// 7 7
// 0 1
// 1 2
// 1 4
// 2 3
// 4 5
// 3 5
// 5 6