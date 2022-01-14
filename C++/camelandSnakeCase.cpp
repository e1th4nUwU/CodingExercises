#include<iostream>
#include<string>
#include <ctype.h>

std::string toSnakeCase(std::string);
std::string toCamelCase(std::string);

int main(){
  std::cout<<toSnakeCase("helloEdabit")<<std::endl<<toCamelCase("hello_edabit");
  return 0;
}

std::string toSnakeCase(std::string str) {
  std::string s="";
  for(int i=0; i<str.size(); i++){
    if(isupper(str[i])){
      s+='_';
      s+=tolower(str[i]);
    }
    else{
      s+=str[i];
    }
  }
  return s;
}

std::string toCamelCase(std::string str){
  std::string s="";
  for(int i=0; i<str.size(); i++){
    if(str[i] == '_'){
      s+=toupper(str[i+1]);
      i++;
    }
    else{
      s+=str[i];
    }
  }
  return s;
}
