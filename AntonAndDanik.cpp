
#include <iostream>
#include <string>
using namespace std;
int main() {
 int n;
 string s;
 cin>>n;
 cin>>s;
 int pointer=0,count=0;
 while (pointer < n){
     if (s[pointer]=='A'){
         count++;
     }
     pointer++;
 }
 if (count>n-count){
     cout<<"Anton";
 }
 else if (count==n-count){
     cout<<"Friendship";
 }
 else {
     cout<<"Danik";
 }
}