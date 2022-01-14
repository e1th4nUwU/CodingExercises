#include<iostream>
#include<vector>

std::vector<int> goldDistribution(std::vector<int>);

int main(){
  std::vector<int> arr=goldDistribution({4, 7, 2, 9, 5, 2});
  std::cout<<std::endl<<arr[0]<<' '<<arr[1];
  return 0;
}

std::vector<int> goldDistribution(std::vector<int> arr){
  std::vector <int> mm={0,0};
  for(bool flag=false; arr.size()>0; flag=!flag){
    if(arr[0] >= arr[arr.size()-1]){
      mm[flag]+=arr[0];
      arr.erase(arr.begin());
    }
    else{
      mm[flag]+=arr[arr.size()-1];
      arr.pop_back();
    }
  }
  return mm;
}
