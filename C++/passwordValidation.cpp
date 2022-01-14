/*
Create a function that validates a password to conform to the following rules:

Length between 6 and 24 characters.
At least one uppercase letter (A-Z).
At least one lowercase letter (a-z).
At least one digit (0-9).
Maximum of 2 repeated characters.
"aa" is OK 👍
"aaa" is NOT OK 👎
Supported special characters:
! @ # $ % ^ & * ( ) + = _ - { } [ ] : ; " ' ? < > , .
*/
#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;

bool validatePassword(string);
bool checkUpper(string);

int main(){
  cout<<validatePassword("P1zz@");
  return 0;
}

bool validatePassword(string str){
  int i;
  string specials = "!@#$%^&*()+=_-{}[]:;\"'?<>,.";
  bool flag=0;
  if(str.size() < 6 || str.size() > 24) return 0; //Check size is correct
  for(i=0; i<str.size(); i++) if(isupper(str[i])) i=str.size(); //Check for uppercase
  if(i == str.size()) return 0;
  for(i=0; i<str.size(); i++) if(islower(str[i])) i=str.size(); //Check for lowercase
  if(i == str.size()) return 0;
  for(i=0; i<str.size(); i++){// Check for digits and any non-supported special characters
    if(isdigit(str[i]) == 0){
      if(isalpha(str[i]) == 0 && specials.find(str[i]) == string::npos) return 0;
    }
    else flag = 1;
  }
  for(i=1; i<str.size()-1; i++) if(str[i-1]==str[i] && str[i+1] == str[i]) return 0; //Check character repetition

  return flag;
}
