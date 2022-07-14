#include<bits/stdc++.h>
#define ll long long int
#define vl vector <ll>
#define fr(a,b,c) for(int a=b; a<c; a++)
#define all(c) (c).begin(),(c).end()
using namespace std;

vector<int> dfsHelper(int n, int s,  vector<vector<int>> edge, vector<bool> &visited, vector<int> &v){
    // vector<int> v
    // cout<<s<<" ";
    v.push_back(s);
    visited[s]=true;

    fr(i, 0, n){
        if(visited[i]) continue;
        if(i==s) continue;
        if(edge[s][i]==1){
            v = dfsHelper(n, i, edge, visited, v);
        }
    }
    return v;

}


vector<int> bfsHelper(int n, int s,  vector<vector<int>> edge, vector<bool> &visited){
    vector<int> v;
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        // cout<<f<<"f ";
        v.push_back(f);
        fr(i, 0, n){
            if(visited[i]) continue;
            if(i==s) continue;
            if(edge[f][i]==1){
                q.push(i);
                visited[i]=true;
            }            
        }
    }
    // cout<<endl;
    return v;
}

vector<vector<int>> dfs(vector<vector<int>> edge, vector<bool> &visited){
    vector<vector<int>> ans;
    int n= visited.size();
    fr(i, 0, n ){
        if(!visited[i]){
            vector<int> v;
            v = dfsHelper(n, i, edge, visited, v);
            // cout<<endl;
            ans.push_back(v);
        }
    }
    return ans;

}

vector<vector<int>> bfs(vector<vector<int>> edge, vector<bool> &visited){
    vector<vector<int>> ans;
    int n= visited.size();
    fr(i, 0, n ){
        if(!visited[i]){
            vector<int> v;
            v = bfsHelper(n, i, edge, visited);
            // cout<<endl;
            ans.push_back(v);
        }
    }
    return ans;

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

    vector<vector<int>> ans1;
    vector<vector<int>> ans2;

    ans1 = dfs(edge, visited);

    fr(i, 0, visited.size()) visited[i]=false;

    ans2 = bfs(edge, visited);


    cout<<"dfs result"<<endl;

    fr(i, 0, ans1.size()){
        fr(j, 0, ans1[i].size()){
            cout<<ans1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"bfs result"<<endl;
    fr(i, 0, ans2.size()){
        fr(j, 0, ans2[i].size()){
            cout<<ans2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sab result aya ki nhi"<<endl;

    return 0;

}

// 13 11
// 0 1
// 0 2
// 1 2
// 2 3
// 3 4
// 5 7
// 5 9
// 9 7
// 9 6
// 8 11
// 11 12