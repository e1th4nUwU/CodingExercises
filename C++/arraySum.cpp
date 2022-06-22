/*
Program to sum an array of numbers in the least number of lines possible
*/

#include<iostream>
#include<vector>
#include<algorithm>

int sum(std::vector<int>);

int main(){
  std::cout<<sum({1,2,3});
  return 0;
}

int sum(std::vector<int> arr){
  return 0 + (arr.size() ? arr[0] + sum({arr.begin() + 1, arr.end()}): 0);
}
