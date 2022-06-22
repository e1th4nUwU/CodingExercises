/*
This is a reverse coding challenge. Normally you're given explicit directions with how to create a function.
Here, you must generate your own function to satisfy the relationship between the inputs and outputs.

Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

"A4B5C2" ➞ "AAAABBBBBCC"
"C2F1E5" ➞ "CCFEEEEE"
"T4S2V2" ➞ "TTTTSSVV"
"A1B2C3D4" ➞ "ABBCCCDDDD"
*/

#include<iostream>
#include<string>

std::string mysteryFunc(std::string s){
    std::string str = "";
    int i,j;

    for(i=0; i<s.size(); i+=2)
        for(j=0; j<s[i+1] - '0'; j++)
            str+=s[i];

    return str;
}

int main(){
    using namespace std;
    string str = "A4B5C2";
    cout<<mysteryFunc(str);

    return 0;
}