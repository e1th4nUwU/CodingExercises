#include<iostream>
#include<string>
using namespace std;

int main(){
  int n, result, s_index=0, _s_index;
  cout<<"Insert number of repetitions: ";
  cin>>n;

  //Number of spaces needed to show on prompt, will be uniform from 1-99, I don't really feel like ending this properly, I have more homework, sorry
  result = n * (n*n -1) + 3;
  while(result > 0){ result/=10; s_index++; }

  cout<<"#Hypothesis: "<<endl<<endl;
  for(int i=1; i<=n; i++){
    result = i * (i*i -1) + 3;
    cout<<endl<<i<<"("<<i<<"^2 - 1) + 3 = "<<result<<"     ";

    _s_index = to_string(result).size();
    while(_s_index < s_index){
      cout<<" ";
      _s_index++;
    }
    cout<<"Multiple of 3? ";
    if(result%3){ cout<<"NO"; }
    else{ cout<<"Yes"; }
  }


  result = n * (n*n -1) + 3 + 3*((n*n) +n);
  cout<<endl<<endl<<"#Thesis + magic zero: "<<endl<<endl;
  for(int i=1; i<=n; i++){
    result = i * (i*i -1) + 3 + 3*((i*i) +i);
    cout<<endl<<i<<"("<<i<<"^2 - 1) + 3 + 3("<<i<<"^2 + "<<i<<") = "<<result<<"     ";

    _s_index = to_string(result).size();
    while(_s_index < s_index){
      cout<<" ";
      _s_index++;
    }

    cout<<"Multiple of 3? ";
    if(result%3){ cout<<"NO"; }
    else{ cout<<"Yes"; }
  }
  return 0;
}
