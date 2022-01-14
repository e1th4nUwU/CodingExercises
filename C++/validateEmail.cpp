#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

bool validateEmail(string str);

int main(){
  vector<string> str{ "@edabit.com", "@edabit",  "matt@edabit.com", "hello.gmail@com", "bill.gates@microsoft.com", "hello@email", "%^%$#%^%", "www.email.com", "email"};
  for(int i=0; i<str.size(); i++){
    cout<<endl<<str[i]<<": "<<validateEmail(str[i]);
  }
  return 0;
}

bool validateEmail(string str) {
  reverse(str.begin(), str.end());
  size_t a = str.find('@'); size_t d = str.find('.');
  //I know
  return (!(!(str[str.length()-1] == '@') != !(a<d)) && str.find('@')!=string::npos && str.find('.')!=string::npos);
}
