#include <iostream>
#include <string>
using namespace std;
int main() {
string s,t;
cin>>s>>t;
int pos=0;
int inst=0;

int size=t.size();
while (size--){
    if (s[pos]==t[inst]){
        pos++;
    }
    inst++;
}
cout<<pos+1;

}
