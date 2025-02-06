#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    int n;
    cin>>n;
    cin>>s;
    int l=0,r=1,result=0;
    while (r<n){
        if (s[l]==s[r]){
            result++;
        }
        l++;r++;
    }
    cout<<result;
}
