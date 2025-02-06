#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
 int amount;
 vector <int> vec;
 cin>>amount;
 while (amount--){
     int cubes;
     cin>>cubes;
     vec.push_back(cubes);
 }
 sort(vec.begin(),vec.end());
 for (int x:vec){
     cout<<x<<" ";
 }
}