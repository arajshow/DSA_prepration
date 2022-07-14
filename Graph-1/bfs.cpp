//  bredth first search -> it says that iterate level wise just like you did in tree case , you can say you have to print those ehich is more nearrer to you first.


#include<bits/stdc++.h>
#define ll long long int
#define vl vector <ll>
#define fr(a,b,c) for(int a=b; a<c; a++)
#define all(c) (c).begin(),(c).end()
using namespace std;

void dfs(int st, int n, vector<vector<int>> matrics, vector<bool> &value){
    
    

    queue<int> q;
    q.push(st);
    value[st]=true;

    while(q.size()>0){
        int fr= q.front();
        q.pop();
        cout<<fr<<" ";
        fr(i, 0, n){
            if(i==st)
                continue;
            if(value[i]){
                continue;
            }
            if(matrics[fr][i]==1){

                q.push(i);
                value[i]=true;
            }
        }
    }
    cout<<endl;
    // fr(i, 0, n){
    //     if(i==st)
    //         continue;
    //     if(matrics[st][i]==1){
    //         if(value[i])
    //             continue;
    //         dfs(i, n, matrics, value);
    //     }
    // }
}

int main(){

    int vertics, edge;
    cin>>vertics>>edge;

    vector<bool> verticsApplied(vertics+1, false);

    vector<vector<int>> adjecentMatrics(vertics+1, vector<int> (vertics+1, 0));


    for(int i=0; i<edge; i++){
        int f, s;
        cin>>f>>s;
        adjecentMatrics[f][s]=1;
        adjecentMatrics[s][f]=1;

    }

    dfs(0, vertics+1,  adjecentMatrics, verticsApplied);

    return 0;

}

// 10 14
// 0 1
// 0 3
// 0 4
// 1 2
// 4 5
// 4 8
// 2 10
// 2 3
// 3 7
// 3 5
// 5 6
// 7 6
// 8 6
// 6 9