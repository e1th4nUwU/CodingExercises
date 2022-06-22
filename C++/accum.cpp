/*
Given a string with random characters, the program will add each new character
to a new string in which every character found will be repeated according to
the position it was found on; the first iteration of the character will be
capitalised
*/
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
