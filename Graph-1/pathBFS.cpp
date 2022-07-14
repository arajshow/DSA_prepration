#include<bits/stdc++.h>
#define ll long long int
#define vl vector <ll>
#define fr(a,b,c) for(int a=b; a<c; a++)
#define all(c) (c).begin(),(c).end()
using namespace std;


vector<int>  bfs(vector<vector<int>> edge, vector<bool> &visited, int s, int f, vector<int> &v){
    int n= visited.size();
    map<int, int> map;
    queue<int> q;
    q.push(s);
    visited[s]=true;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        fr(i, 0, n){
            if(i==front) continue;
            if(visited[i]) continue;
            if(edge[front][i]==1){
                q.push(i);
                map[i]=front;
                visited[i]=true;
                if(i==f){
                    break;
                }
            }
        }
        if(visited[f]){
            break;
        }
    }

    v.push_back(f);
    // int k=0;
    fr(i, 0, map.size()+1){
        int k = map[f];
        if(f==s) break;
        v.push_back(k);
        f=k;
        
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

    ans = bfs(edge, visited, s, f, ans);

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