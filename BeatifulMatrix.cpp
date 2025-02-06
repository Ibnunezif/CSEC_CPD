#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
 vector <int> vec;
  int index;
 for (int i=0;i<25;i++){
     int data;
     cin>>data;
     vec.push_back(data);
      if (data==1){
         index=i;
     }
 }
 int column=index%5;
 int row=index/5;
 cout<<abs(column-2)+abs(row-2);
}