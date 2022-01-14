#include<iostream>
#include <cmath>

double dis(int, int);

int main(){
  std::cout<<dis(593,61)<<std::endl;
  return 0;
}

double dis(int price, int discount) {
	return round((price-price*discount*.01)*100)/100;
}
