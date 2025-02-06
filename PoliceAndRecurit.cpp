//police recruits
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t,n,x=0,y=0;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n;
	if (n==-1 && y==0)
	x=x-1;
	else if (n==-1 && y>0)
	y=y-1;
	else if(n>0)
	y=y+n;
	}
	cout<<(abs(x));
	}