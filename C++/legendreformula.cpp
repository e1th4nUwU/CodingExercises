#include<iostream>
#include <math.h>

int legendre(int, int);

int main(){
  std::cout<<legendre(2, 128);
  return 0;
}

int legendre(int p, int n){
  int r=0;
  for(int i=1; pow(p,i)<=n; i++){
    r+= n/pow(p,i) ;
    std::cout<<n/pow(p,i)<<std::endl;
  }
  std::cout<<std::endl;
  return r;
}
