//buy a shovel
#include <iostream>
using namespace std;
int main()
{
	int l,t,n,k=1;
	cin>>n;
	cin>>t;
	l=n;
	while (l%10!=0 && l%10 != t)	
	{
		k++;
		l=n*k;	
		}
cout<<k;
	}
