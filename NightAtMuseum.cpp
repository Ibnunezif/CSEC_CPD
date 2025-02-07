#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int offset=97;
   string s;
   cin>>s;
   int current=0,result=0;
   for (char x:s){
       int next=int(x)-offset;
       if (current<next){
           int forward=next-current;
           int backward=current+(25-next)+1;
           result+=min(forward,backward);
           current=next;
       }
       else if (current>next){
           int forward=(25-current)+next+1;
           int backward=current-next;
           result+=min(forward,backward);
           current=next;
       }
   }
   cout<<result;
}
