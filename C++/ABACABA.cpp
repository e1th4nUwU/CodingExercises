/*
This program is supossed to write the following pattern according to the letter you insert:
INPUT         OUTPUT
A             A
B             ABA
C             ABACABA
D             ABACABADABACABA
And so on...
*/
#include<iostream>
#include<string>

std::string ABA (char);

int main(){
    char c;
    std::cout<<"Insert a capital letter (english alphabet): ";
    std::cin>>c;
    std::cout<<ABA(c);
    return 0;
}

std::string ABA(char s) {
    std::string r="";
    for(int i=65; i<=(int)s; i++){
        r = r + (char)i + r;
    }
    return r;
}
