#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 1, b = 1;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}