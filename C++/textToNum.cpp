#include<iostream>
#include<string>
#include<ctype.h>

std::string textToNum(std::string);

int main(){
  std::cout<<textToNum("123-647-EYES");
  return 0;
}

std::string textToNum(std::string phone) {
  int c; std::string ans="";
	for(int i=0; i<phone.size(); i++){

    if(isalpha(phone[i])){
      c =(int)phone[i];
      c = c<81 ? ( (c-65)/3 + 2 ) : ( c < 84 ? 7 : ( c > 86 ? 9 : 8 ) );;
      ans+=std::to_string(c);
    }
    else{
      ans+=phone[i];
    }

  }
  return ans;
}
