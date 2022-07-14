#include<bits/stdc++.h>
using namespace std;


void checkit(){
    int n, a=1, check=0;
    cin>>n;

    vector<int> v(n);
    for(auto &i : v){
        i=a++;
    }
    a=1;

    do{
        for(int i=0; i<n-1; i++){
            if(abs(v[i+1]-v[i])%a==0){
                a++;
                continue;
            }else{
                check=1;
                break;
            }
        }
        if(!check){
            for(auto i : v){
                cout<<i<<" ";
            }
            cout<<"\n";
        }else{
            check=0;
        }
        a=1;     
    }while(next_permutation(v.begin(), v.end()));
}


int main(){

    int n=11;
    double p= (double)(n+1)/100;
    cout<<p<<endl;




    // int t;
    // cin>>t;
    // while(t--){
    //     checkit();
    // }

    return 0;

}