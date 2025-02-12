
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> vec;
    int numberOfLines;
    cin>>numberOfLines;
    for (int i=0;i<numberOfLines;i++){
        int birds;
        cin>>birds;
        vec.push_back(birds);
    }
    int hitNumber;
    cin>>hitNumber;
    while (hitNumber--){
        int hitLine;
        int hitPos;
        cin>>hitLine>>hitPos;
        if (hitLine==1){
            int bird=vec[0];
            vec[1]+=(bird-hitPos);
            vec[0]=0;
        }else if (hitLine==vec.size()){
            int bird=vec[vec.size()-1];
            vec[vec.size()-2]+=(hitPos-1);
            vec[vec.size()-1]=0;
        }else{
            int bird=vec[hitLine-1];
            vec[hitLine-2]+=(hitPos-1);
            vec[hitLine]+=(bird-hitPos);
            vec[hitLine-1]=0;
        }
    }
    for (int x:vec){
        cout<<x<<"\n";
    }
}
