#include<bits/stdc++.h>
using namespace std;


//    for (int i=1; i<=sqrt(n); i++)
//     {
//         if (n%i == 0)
//         {
//             // If divisors are equal, print only one
//             if (n/i == i)
//                 cout <<" "<< i;
 
//             else // Otherwise print both
//                 cout << " "<< i << " " << n/i;
//         }
//     }


int fact(int n){
    int count=0;
    for(int i=1; i<sqrt(n); i++){
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                count++;
 
            else // Otherwise print both
                count+=2;
        }  
    }
    return count;
}

void cas(){
    int n;
    cin>>n;
    cout<<fact(n-1)<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        cas();
    }
	// your code goes here
	return 0;
}
