//sereja and dima
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t, n, x = 0, y = 0;
	cin >> t;
	vector<int> vec;
	for (int k = 0; k < t; k++)
	{
		cin >> n;
		vec.push_back(n);
	}
	int end = t-1, front = 0,k=0;
	while (end >= front)
	{
		if (k % 2 == 0)
		{
			if (vec[end] > vec[front])
			{
				x = x + vec[end];
				end--;
			}
			else
			{
				x = x + vec[front];
				front++;
			}
			k++;
		}
		else
		{
			if (vec[end] > vec[front])
			{
				y = y + vec[end];
				end--;
			}
			else
			{
				y = y + vec[front];
				front++;
			}
			k++;
		}
	}
cout<<x<<" "<<y;
}
 
