#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

string insertWhitespace(string);

int main(){

  cout<<endl<<insertWhitespace("TheGreatestUpsetInHistory");

  return 0;

}

string insertWhitespace(string str){
  for(int i=1; i<str.size(); i++){
    if(isupper(str[i]) && !isupper(str[i-1]) ){
      str.insert(i," ");
      i++;
  }}
  return str;
}
