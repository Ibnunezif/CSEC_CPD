#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int y,w;
cin>>y>>w;
int max;
y>w?max=y:max=w;
max=6-max+1;
int six=6/__gcd((max),6);
max=max/__gcd((max),6);
cout<<max<<"/"<<six;
}
