/*
1. You are given a string str. The string str will contains numbers only,
where each number stands for a key pressed on a mobile phone.
2. The following list is the key to characters map :
    0 -> .;
    1 -> abc
    2 -> def
    3 -> ghi
    4 -> jkl
    5 -> mno
    6 -> pqrs
    7 -> tu
    8 -> vwx
    9 -> yz
3. Complete the body of getKPC function - without changing signature - to get the list of all words
that could be produced by the keys in str.
Use sample input and output to take idea about output.

Note -> The online judge can't force you to write the function recursively but that is what
the spirit of question is. Write recursive and not iterative logic.
The purpose of the question is to aid learning recursion and not test you.
Input Format
A string str : 78

Output Format
Contents of the arraylist containing words as shown in sample output
[tv, tw, tx, uv, uw, ux]
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> decode(string s){
  vector<string> ans;
  for(int i=0; i<s.size(); i++){
    if(s[i]=='0') ans.push_back(".");
    else if(s[i]=='1') ans.push_back("abc");
    else if(s[i]=='2') ans.push_back("def");
    else if(s[i]=='3') ans.push_back("ghi");
    else if(s[i]=='4') ans.push_back("jkl");
    else if(s[i]=='5') ans.push_back("mno");
    else if(s[i]=='6') ans.push_back("pqrs");
    else if(s[i]=='7') ans.push_back("tu");
    else if(s[i]=='8') ans.push_back("vwx");
    else ans.push_back("yz");
  }
  return ans;
}

vector<string> getKPC(string s) {
  vector<string> ans = decode(s);
  int count = ans.size();
  // vector<string> *temp = new vector<string>(count);
  // for(int i=0; i<count; i++){
  //   string s1 = ans[i];
  //   for(int j=0 ; j<s1.size(); j++){
  //     temp[i].push_back(s1[j] + "");
  //   }
  // }

  vector<string> finalans;
  int start =0
  while(count!=start){

  }




}


int main() {
  string s;
  cin >> s;
  vector<string> ans = getKPC(s);
  int cnt = 0;


  cout << '[';
  for (string str : ans) {
    if (cnt != ans.size() - 1)
      cout << str << ", ";
    else
      cout << str;
    cnt++;
  }
  cout << ']';

  return 0;
}