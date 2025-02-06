#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    string username;
    cin >> username;
    int size = username.size();
    set<char> dist;
    int ind = 0;
    while (size--)
    {
        dist.insert(username[ind]);
        ind++;
    }
    if (dist.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }

    else
    {
        cout << "IGNORE HIM!";
    }
}