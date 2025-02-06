
#include <iostream>
using namespace std;
int main() {
    int n,h,width=0;
cin>>n>>h;
while (n--){
    int a;
    cin>>a;
    if (a>h){
        width=width+2;
    }
    else {
        width++;
    }
}
 cout<<width;
}