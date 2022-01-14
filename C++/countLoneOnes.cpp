//Create a function which counts how many lone 1s appear in a given number. Lone means the number doesn't appear twice or more in a row.

#include<iostream>
using namespace std;

int countLoneOnes(unsigned int n);

int main(){
  cout<<countLoneOnes(11231212111);
  return 0;
}

int countLoneOnes(unsigned int n){
  int c=0;
  while(n > 19){
    c+=n%10 == 1 && (n%100)/10 != 1;
    n/=10;
  }
  c+=(n%10 == 1 && n/10 != 1)||(n%10 != 1 && n/10 == 1);
  return c;
}
