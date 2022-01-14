#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> filterUnique(vector<string>);

int main(){
  vector<string> v=filterUnique({"abab", "ba", "ab", "cc"});
  cout<<endl<<"xd";
  return 0;
}

vector<string> filterUnique(vector<string> arr){
  vector<string> arr_r; string aux; int j;
  for(int i=0; i<arr.size(); i++){
    aux="";

    //Check if string contains duplicates
    for(j=0; j<arr[i].size(); j++){
      size_t f = aux.find(arr[i][j]);
      if ( f != string::npos ){ break; }
      aux+=arr[i][j];
    }

    //If string didn't contain duplicates, push it back into the array
    if(arr[i].size() == j){ arr_r.push_back(arr[i]); }

  }
  return arr_r;
}
