#include<iostream>
#include<string>

std::string reverse(std::string);

int main(){
  std::cout<<std::endl<<std::endl<<reverse("nyan")<<std::endl<<std::endl<<"";
  return 0;
}

std::string reverse(std::string str){
  //Exception
  if(str.size() < 2){
    return str;
  }
  //Saving ast two chars
  std::string aux = std::string() + str[0] + str[str.size()-1];
  //Recursion
  str =  reverse(str.substr(1, str.size()-2));
  //Adding last two chars
  str.insert(0,1,aux[1]);
  str+=aux[0];
  return str;
}
