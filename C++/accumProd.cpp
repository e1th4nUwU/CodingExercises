#include<iostream>
#include<vector>

std::vector<int> accumulatingProduct(std::vector<int>);

int main(){
  std::vector<int> v = accumulatingProduct({1,2,3,4});
  for(int i=0; i<v.size(); i++){
    std::cout<<v[i]<<' ';
  }
  return 0;
}

std::vector<int> accumulatingProduct(std::vector<int> arr){
  int n=1; std::vector<int> v;
  for(int i=0; i<arr.size(); i++){
    n*=arr[i];
    v.push_back(n);
  }
  return v;
}
