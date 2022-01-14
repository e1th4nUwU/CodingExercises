#include<iostream>
#include<vector>

std::vector<int> largerThanRight(std::vector<int>);
bool checkBug(std::vector<int>);

int main(){
  std::vector<int> arr = largerThanRight({3,13,11,2,1,9,5});
  for(int i=0; i< arr.size(); i++){
    std::cout<< arr[i] <<' ';
  }
  return  0;
}

std::vector<int> largerThanRight(std::vector<int> arr){
	//Actual function
  int max=arr[0];
  for(int i=1; i< arr.size(); i++){
    if(max <= arr[i]){
      max=arr[i];
      std::vector<int> aux(arr.begin() + i, arr.end());
      arr = aux;
      i=0;
    }
  }
  return arr;
}
