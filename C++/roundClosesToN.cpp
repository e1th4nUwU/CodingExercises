#include<iostream>
using namespace std;

unsigned int roundNumber(unsigned int, unsigned int);

int main(){
  cout<<roundNumber(46,7);
  return 0;
}

unsigned int roundNumber(unsigned int num, unsigned int n) {
	unsigned int aux1=num,aux2=num;
  int i,j;
  for(i=0; aux1%n; i++){
    aux1=num+i;
  }
  for(j=0; aux2%n; j++){
    aux2=num - j;
  }
  return i==j ? aux1 : ( i < j ? aux1 : aux2);
}
