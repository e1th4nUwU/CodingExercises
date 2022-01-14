#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string);

int main(){
  cout<<endl<<isPalindrome("abcba")<<endl<<isPalindrome("abba")<<endl<<isPalindrome("abbbbb");
  return 0;
}

bool isPalindrome(std:: string str){
  cout<<str<<endl;
  return ( str.size() < 2 ? true : (str[0] == str[str.size()-1] ? isPalindrome(str.substr(1,str.size()-2)) : false)  );
}
