#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<string> sortByLength(vector<string>);

int main(){
  vector<string> v = sortByLength({ "Google", "Apple", "Microsoft" });
  for( auto it = v.begin(); it != v.end(); it++){
    cout<<endl<<*it;
  }
  return 0;
}

vector<string> sortByLength(vector<string> vs){
  string aux;
  for(int i=0; i<vs.size(); i++){
    for(int j=i+1; j<vs.size(); j++){
      if(vs[i].size() > vs[j].size()){
        aux = vs[i];
        vs[i] = vs[j];
        vs[j] = aux;
      }
    }
  }
  return vs;
}
