#include<iostream>
#include<math.h>

int mod(int,int);

int main(){
  int a,b;
  std::cout<<"a: ";
  std::cin>>a;
  std::cout<<"b: ";
  std::cin>>b;

  std::cout<<std::endl<<std::endl<<mod(a,b);

  return 0;
}

int mod(int a, int b){
  int c = a%b;
  return c < 0 ? c+b : c;
}
