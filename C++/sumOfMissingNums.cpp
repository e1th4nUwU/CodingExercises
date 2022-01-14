#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
#include<ctype.h>
using namespace std;

int sumOfMissingNums(vector<string>);

int main(){
  cout<<endl<<sumOfMissingNums({"1", "3", "putoelquelolea", "5", "7", "a", "9127", "nya", "9"});
  return 0;
}

int sumOfMissingNums(vector<string> arr){
  vector<int> nums;
  //These are actually the maximum and minimum values an int value can store
  int max=-2147483648, min=2147483647, j;
  for(int i=0; i<arr.size(); i++){
    //Check string elements to look for any non-digits
    for(j=0; j<arr[i].size(); j++){
      if(!isdigit(arr[i][j])){ break; }
    }

    //Process it if it's actually a number
    if(j == arr[i].size()){
      j=stoi(arr[i]);
      max = j > max ? j : max;
      min = j < min ? j : min;
      nums.push_back(j);
    }
  }

  //Count values which are missing
  j=0;
  for(min+1; min<max; min++){ j+=(find(nums.begin(), nums.end(), min) == nums.end()); }
  return j;
}
