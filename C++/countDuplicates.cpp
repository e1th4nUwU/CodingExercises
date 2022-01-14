#include<iostream>
#include<string>
#include<bits/stdc++.h>

int duplicates(std::string str);

int main(){
  std::cout<<duplicates("Hello World!");
  return 0;
}

int duplicates(std::string str){
  std::string dic=""; int n=0;
  for(int i=0; i<str.size(); i++){

    std::size_t found = dic.find(str[i]);
    if( found == std::string::npos ){
      dic+=str[i];
      n += count(str.begin(), str.end(), str[i])-1;
    }
  }
  return n;
}
