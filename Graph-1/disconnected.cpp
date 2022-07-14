#include<bits/stdc++.h>
#define ll long long int
#define vl vector <ll>
#define fr(a,b,c) for(int a=b; a<c; a++)
#define all(c) (c).begin(),(c).end()
using namespace std;

void dfsHelper(int n, int s,  vector<vector<int>> edge, vector<bool> &visited){
    cout<<s<<" ";
    visited[s]=true;

    fr(i, 0, n){
        if(visited[i]) continue;
        if(i==s) continue;
        if(edge[s][i]==1){
            dfsHelper(n, i, edge, visited);
        }
    }

}


void bfsHelper(int n, int s,  vector<vector<int>> edge, vector<bool> &visited){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        fr(i, 0, n){
            if(visited[i]) continue;
            if(i==s) continue;
            if(edge[f][i]==1){
                q.push(i);
                visited[i]=true;
            }            
        }
    }

}

void dfs(vector<vector<int>> edge, vector<bool> &visited){
    int n= visited.size();
    fr(i, 0, n ){
        if(!visited[i]){
            dfsHelper(n, i, edge, visited);
            cout<<endl;
        }
    }

}

void bfs(vector<vector<int>> edge, vector<bool> &visited){
    int n= visited.size();
    fr(i, 0, n ){
        if(!visited[i]){
            bfsHelper(n, i, edge, visited);
            cout<<endl;
        }
    }

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

    dfs(edge, visited);

    bfs(edge, visited);

    return 0;

}