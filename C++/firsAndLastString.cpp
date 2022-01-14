#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

vector<string> firstAndLast(string);

int main(){
  firstAndLast("marmite");
}

vector<string> firstAndLast(string s){
  vector<int> ascii;
  for(int i=0; i<s.size(); i++){
    ascii.push_back((int)s[i]);
  }
  sort (ascii.begin(), ascii.end());
  string first="", last="";
  for(int i=0; i<ascii.size(); i++){
    first += ascii[i];
    last.insert(last.begin()+0, ascii[i]);
  }
  return {first,last};
}
