#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
using namespace std;

int equation(string);

int main(){
  cout<<equation("7*4-2");
  return 0;
}

int equation(string s){
  int n=0,index_s=0; vector<int> nums; string op="";
  for(int i=0; i<=s.size(); i++){
    if(!isdigit(s[i]) || i == s.size()){
      op+=s[i];
      nums.push_back(stoi(s.substr(index_s,i-index_s)));
      index_s=i+1;
    }
  }
  n+=nums[0];
  for(int i=0; i<op.size(); i++){
    switch(op[i]){
      case '+' : n+=nums[i+1]; break;
      case '-' : n-=nums[i+1]; break;
      case '*' : n*=nums[i+1]; break;
    }
  }
  return n;
}
