//Team
#include <iostream>
using namespace std;
int main()
{
	int n, solved = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int count = 0; for (int k = 0; k < 3; k++)
		{
			int result[3];
			cin >> result[k];
			count += result[k];
		}
		if (count >= 2)
			solved++;
	}
	cout << solved;
}