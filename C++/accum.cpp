#include<iostream>
#include<string>
#include <ctype.h>

std::string accum(std::string);

int main(){
  std::cout << accum("EXpzPFx") << '\n';
  return 0;
}

std::string accum(std::string s){
  std::string str="";
  for(int i=0; i<s.size(); i++){
    str+=toupper(s[i]);
    for(int j=0; j<i; j++){ str+= tolower(s[i]); }

    if(s.size()-1!=i){ str+='-'; }
  }
  return str;
}
