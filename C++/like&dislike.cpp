#include<iostream>
#include<string>
#include<vector>

std::string likeOrDislike(std::vector<std::string>);

int main(){
  std::cout << likeOrDislike({"Dislike"}) << '\n';
  return 0;
}

std::string likeOrDislike(std::vector<std::string> arr){
  bool active=true; std::string veredict="Nothing";

  for(int i=0; i<arr.size(); i++){

    if(arr[i] ==arr[i-1]){  (active = !active);  }
    else{  (veredict=arr[i]);  }

  }

  return active ? veredict : "Nothing";
}
