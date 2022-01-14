#include<vector>
#include<iostream>

int sum_fractions(std::vector<std::vector<int>>);

int main(){
  std::cout<<sum_fractions({{2, 4}, {1, 3}});
  return 0;
}

int sum_fractions(std::vector<std::vector<int>> arr){
  int mcm=0,i;
  //Get max value of denominators
  for(i=0; i<arr.size(); i++){
    mcm = arr[i][1]*(arr[i][1] > mcm) + mcm*(arr[i][1] <= mcm);
  }
  //Finding mcm / denominator
  for(int j=1; 1; j++){

    for(i=0; i<arr.size(); i++){
      if(mcm*j % arr[i][1]){ break; }
    }
    if(i == arr.size()){
      mcm*=j;
      break;
    }

  }
  //Summing numerators
  int num=0;
  for(i=0; i<arr.size(); i++){
    num+=arr[i][0] * (mcm/arr[i][1]);
  }

  return num/mcm;
}
