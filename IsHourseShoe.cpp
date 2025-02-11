#include <iostream>
#include <set>
using namespace std;
int main() {
  set <int> s;
  int i=4;
  while (i--){
      int horseShoes;
      cin>>horseShoes;
      s.insert(horseShoes);
  }
   cout<<4-s.size();
}
