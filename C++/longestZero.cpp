#include<iostream>
#include<string>
#include<vector>

std::string longestZero(std::string);

int main(){
  std::cout<<longestZero("01100001011000");
  return 0;
}

std::string longestZero(std::string str){
  int index_s=0, index_end=0; std::string s= ""; bool flag=true;
  for(int i=0; i<str.size(); i++){
    if(flag && str[i] == '0'){
      flag = !flag;
      index_s = i;
    }
    if(!flag && ((str[i] == '1' && str[i-1] == '0')||(i+1 == str.size() && str[i] == '0'))){
      flag = !flag;
      index_end=i+(i+1 == str.size() && str[i] == '0')-index_s;
      if( s.size() < index_end ){ s=str.substr(index_s, index_end); }
    }
  }
  return s;
}
