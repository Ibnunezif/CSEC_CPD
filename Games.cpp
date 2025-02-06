//Games
#include <iostream>
using namespace std;
int main()
{
	int n, g, h, counter = 0;
	cin >> n;
	int guest[n];
	int home[n];
	for (int k = 0; k < n; k++)
	{
		cin >> h >> g;
		guest[k] = g;
		home[k] = h;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (home[i] == guest[j])
				counter++;
		}
	}
	cout << counter;
}