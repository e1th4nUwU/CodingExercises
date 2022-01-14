#include<iostream>
#include<algorithm>
#include<vector>

bool isSubset(std::vector<int>,std::vector<int>);

int main(){
  std::cout<<std::endl<<std::endl<<isSubset({3, 2, 5}, {5, 3, 7, 9, 2});
  return 0;
}

bool isSubset(std::vector<int> arr1, std::vector<int> arr2) {
  for(int i=0; i<arr1.size(); i++){
    if( std::find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end()){
      return false;
    }
  }
  return true;
}
