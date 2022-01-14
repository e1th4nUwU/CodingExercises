#include<iostream>
#include<cstdlib>
#include <algorithm>

std::string boomIntensity(int);

int main(){
  for(int i=0; i<15; i++){
    std::cout<<std::endl<<std::endl<<boomIntensity(i)<<'.';
  }
}

std::string boomIntensity(int n){
  std::string str="B";
  for(int i=0; i<n; i++){
      str+='o';
  }
  str+='m';
  if(n%5 == 0){ std::transform(str.begin(), str.end(),str.begin(), ::toupper); }
  if(n%2 == 0){ str+="!"; }
  return n<2 ? "boom" : str;
}
