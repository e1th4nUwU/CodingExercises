#include<iostream>
#include<string>
using namespace std;

int sumDigits(int, int);

int main(){
  cout<<endl<<sumDigits(19,22);
  return 0;
}

int sumDigits(int n1, int n2){
  int n=0; string aux;
  for(int i=n1; i<=n2; i++){
    aux=to_string(i);
    for(int j=0; j<aux.size(); j++){
      n+=(aux[j] - '0');
    }
  }
  return n;
}
