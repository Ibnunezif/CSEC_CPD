#include <iostream>
#include <string>
using namespace std;
int main () {
    int offset='1';
    int strip[4];
    for (int i=0;i<4;i++){
        cin>>strip[i];
    }
  string s;
  cin>>s;
  int result=0;
  for (char x:s){
      int index=(int)x-offset;
      result+=strip[index];
  }
cout<<result;
}