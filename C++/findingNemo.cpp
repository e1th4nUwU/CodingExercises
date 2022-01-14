#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>

std::string findNemo(std::string);

int main(){
  std::cout<<findNemo("I am Ne mo Nemo !");
  return 0;
}

std::string findNemo(std::string str){
  std::vector<std::string> words; std::string aux="";
  //Divide string into words
  for(int i=0; i<str.size(); i++){
    if(str[i] == ' ' || i==str.size()){
      words.push_back(aux);
      aux="";
    }
    else{
      aux+=str[i];
    }
  }

  words.push_back(aux);
  aux="Nemo";

  //Finding Nemo OwO
  for(int i=0; i<words.size(); i++){
    if(aux.compare(words[i]) == 0){ return "I found Nemo at " + std::to_string(i+1) + "!"; }
  }
  return "I can't find Nemo :(";
}
