#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int x = 2 * (n - i);
        for (int j = 0; j < x; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}