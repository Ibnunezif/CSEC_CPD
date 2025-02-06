//magnets
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string A, B; 
	cin >> A; 
	int counter = 1; 
	for (int i = 1; i < n; i++)
	{
		cin >> B; 
		if (A != B) 
		{
			A = B; 
			counter++; 
		}
	}
	cout << counter;
}