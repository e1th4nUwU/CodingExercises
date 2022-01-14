#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

string textToNum(string);

int main(){
  cout<<textToNum("(325)444-ATESTZ");
  return 0;
}

string textToNum(string phone){
  for(int i=0; i<phone.size(); i++){
    if(isalpha(phone[i])){
      int j = (phone[i]-59)/3 < 7 ? (phone[i]-59)/3 : 0;
      if(!(j)){
        j = phone[i] < 84 ? 7 : phone[i] > 86 ? 9 : 8;
      }
      phone[i] = j+48;
    }
  }
  return phone;s
}
