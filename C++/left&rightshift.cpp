#include<iostream>
#include<vector>

std::vector<int> leftShift(std::vector<int>,int);
std::vector<int> rightShift(std::vector<int>,int);

int main(){
  std::vector<int> l=leftShift({1, 2, 3, 4,5}, 3);
  std::vector<int> r=rightShift({1,2,3,4,5}, 0);
  for(int i=0; i<l.size(); i++){
    std::cout<<l[i]<<' ';
  }
  std::cout<<'\n';
  for(int i=0; i<r.size(); i++){
    std::cout<<r[i]<<' ';
  }
  return 0;
}

std::vector<int> leftShift(std::vector<int> arr, int num) {
	std::vector<int> v; num%=arr.size();
  for(int i=num; i<arr.size(); i++){
    v.push_back(arr[i]);
  }
  for(int i=0; i<num; i++){
    v.push_back(arr[i]);
  }
  return v;
}

std::vector<int> rightShift(std::vector<int> arr, int num) {
  std::vector<int> v;  num%=arr.size();
  for(int i=arr.size()-num; i<arr.size(); i++){
    v.push_back(arr[i]);
  }
  for(int i=0; i<arr.size()-num; i++){
    v.push_back(arr[i]);
  }
  return v;
}
