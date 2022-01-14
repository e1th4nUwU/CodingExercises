#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

bool isPalindrome(std::string);

int main(){
  std::cout<<std::endl<<std::endl<<isPalindrome("A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!")<<std::endl<<std::endl<<isPalindrome("Neuquen")<<std::endl<<std::endl<<isPalindrome("Not a palindrome");
  return 0;
}

bool isPalindrome(std::string str){
  std::string sr = ""; std::locale loc;
  //Filter alphabetic characters and lowercasing them
  for(int i=0; i<str.size(); i++){
    if( isalpha(str[i]) ){ sr+=std::tolower(str[i],loc); }
  }
  //Creating reverse string and saving the modified one into the original variable
  str=sr; sr="";
  for(int i=str.size()-1; i>-1; i--){
    sr+=str[i];
  }
  //Return comparison
  return !str.compare(sr);
}
