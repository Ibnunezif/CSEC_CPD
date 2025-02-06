#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int small=0;
    for (int i=0;i<s.size();i++){
        if ((int)s[i]>=97){
            small++;
        }
    }
    if (small>=s.size()-small){
        transform (s.begin(),s.end(),s.begin(),::tolower);
    }
    else {
        transform (s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s;
}
