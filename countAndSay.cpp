#include<iostream>
#include<string>
using namespace std;



string countAndSay(int n){
    string result;
    char temp;
    int counter=1;
    string number=std::to_string(1);
    while(--n){
        for(int i=0;i<number.length();i++){
            counter=1;
            temp=number[i];
            while(temp==number[i+1]){
                i++;
                counter++;
            }
            result += std::to_string(counter);
            result += temp;
        }
        number=result;
        result="";
    }
    
    return number;
}

int main(){
    
    string result=countAndSay(5);
    cout<<"result "<<result;
}