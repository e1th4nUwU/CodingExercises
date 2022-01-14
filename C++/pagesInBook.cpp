#include<iostream>
#include<vector>

bool pagesInBook(int);

int main(){
  std::vector<int> arr{5,4005,9453,9474,125250,920046};
  for(int i=0; i<arr.size(); i++){
    std::cout<<std::endl<<pagesInBook(arr[i]);
  }
}

bool pagesInBook(int n){
  int num=0;
  for(int i=1; num<n; i++){
    num+=i;
  }
  return num==n;
}
